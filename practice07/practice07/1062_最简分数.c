#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int Charge(int n, int m)
{
	int i;
	int min = n < m ? n : m;

	for (i = 2; i <= min; i++)
	{
		if (n % i == 0 && m % i == 0)
		{
			return 0;
		}
	}

	return 1;
}

int main2()
{
	int i, flag = 0;
	double N1, N2, M1, M2, K;
	double num1, num2, tmp;

	scanf("%lf/%lf %lf/%lf %lf", &N1, &M1, &N2, &M2, &K);
	num1 = 1.0 * N1 / M1;
	num2 = 1.0 * N2 / M2;
	if (num1 > num2)
	{
		tmp = num1;
		num1 = num2;
		num2 = tmp;
	}
	for (i = 1; i <= 1000; i++)
	{
		tmp = 1.0 * i / K;
		if (tmp > num1 && tmp < num2 && Charge(i, (int)K))
		{
			if (flag == 1)
			{
				putchar(' ');
			}
			printf("%d/%.0f", i, K);
			flag = 1;
		}
		else if (tmp > num2)
		{
			break;
		}
	}
	putchar('\n');

	system("pause");
	return 0;
}