#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

void Print(double a, double M)
{
	if (a > M)
	{
		printf(" Cong");
	}
	else if (a == M)
	{
		printf(" Ping");
	}
	else
	{
		printf(" Gai");
	}
}

int main8()
{
	int a, b, M, X, Y;
	double c;

	scanf("%d%d%d", &M, &X, &Y);
	for (a = 99; a >= 10; a--)
	{
		b = a % 10 * 10 + a / 10;
		c = abs(a - b) * 1.0 / X;
		if (b == Y * c)
		{
			printf("%d", a);
			Print(a, M);
			Print(b, M);
			Print(c, M);
			break;
		}
	}
	if (a < 10)
	{
		printf("No Solution");
	}
	putchar('\n');

	system("pause");
	return 0;
}

//注意丙可能不是整数