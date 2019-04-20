#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

typedef struct
{
	long nume;
	long deno;
	long flag;
}Num;

long GCD(long num1, long num2)
{
	return num2 == 0 ? num1 : GCD(num2, num1 % num2);
}

Num HandNum(Num number)
{
	long tmp;

	if (number.nume < 0)
	{
		number.flag *= -1;
		number.nume = -number.nume;
	}
	else if(number.nume == 0)
	{
		return number;
	}
	tmp = GCD(number.nume, number.deno);
	number.nume /= tmp;
	number.deno /= tmp;

	return number;
}

void PrintNum(Num number)
{
	long integer;
	if (number.deno == 0)
	{
		printf("Inf");
	}
	else
	{
		if (number.nume == 0)
		{
			printf("0");
		}
		else
		{
			integer = number.nume / number.deno;
			number.nume = number.nume % number.deno;
			number = HandNum(number);
			if (number.flag == -1 || integer < 0)
			{
				printf("(-");
			}
			if (integer != 0)
			{
				printf("%ld", abs(integer));
			}
			if (integer != 0 && number.nume != 0)
			{
				putchar(' ');
			}
			if (number.nume != 0)
			{
				printf("%ld/%ld", number.nume, number.deno);
			}
			if (number.flag == -1 || integer < 0)
			{
				printf(")");
			}
		}
	}
}

Num PlusNum(Num number1, Num number2)
{
	return (Num) { number1.nume * number2.deno + number2.nume * number1.deno, number1.deno * number2.deno, 1 };
}
Num SubNum(Num number1, Num number2)
{
	return (Num) { number1.nume * number2.deno - number2.nume * number1.deno, number1.deno * number2.deno, 1 };
}
Num MultiNum(Num number1, Num number2)
{
	return (Num) { number1.nume * number2.nume, number1.deno * number2.deno, 1 };
}
Num DivisNum(Num number1, Num number2)
{
	return (Num) { number1.nume * number2.deno * number2.nume, number1.deno * number2.nume * number2.nume, 1 };
}

void PrintCal(Num number1, Num number2, char oper, Num (*p)(Num, Num))
{
	PrintNum(number1);
	printf(" %c ", oper);
	PrintNum(number2);
	printf(" = ");
	PrintNum(HandNum((*p)(number1, number2)));
	putchar('\n');
}

int main4()
{
	int i = 0;
	Num number1, number2, (*p[4])(Num, Num) = { PlusNum, SubNum, MultiNum, DivisNum };
	char oper[4] = { '+', '-', '*', '/' };
	scanf("%ld/%ld %ld/%ld", &number1.nume, &number1.deno, &number2.nume, &number2.deno);
	while (i < 4)
	{
		PrintCal(number1, number2, oper[i], p[i]);
		i++;
	}

	system("pause");
	return 0;
}

//integer		整数
//numerator		分子	
//denominator	分母