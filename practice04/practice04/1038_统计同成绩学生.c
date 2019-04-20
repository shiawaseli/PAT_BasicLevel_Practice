#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int main8()
{
	int input, n, i;
	int num[105] = { 0 };

	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &input);
		num[input]++;
	}
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &input);
		printf("%d", num[input]);
		if (i != n - 1)
		{
			putchar(' ');
		}
	}
	putchar('\n');
	system("pause");
	return 0;
}