#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i, a, b, c, M, X, Y, tmp, abc[3] = { 0 };

	scanf("%d%d%d", &M, &X, &Y);
	for (c = 0; c <= 1000; c++)
	{
		b = Y * c;
		a = X * c + b;
		if (a >= 100)
		{
			tmp = a / 100 + a / 10 % 10 * 10 + a % 10 * 100;
		}
		else
		{
			tmp = a / 10 + a % 10 * 10;
		}
		if (tmp == b)
		{
			abc[0] = a;
			abc[1] = b;
			abc[2] = c;
		}
	}
	printf("%d", abc[0]);
	for (i = 0; i < 3; i++)
	{
		if (abc[i] > M)
		{
			printf(" Cong");
		}
		else if (abc[i] == M)
		{
			printf(" Ping");
		}
		else
		{
			printf(" Gai");
		}
	}
	putchar('\n');

	system("pause");
	return 0;
}