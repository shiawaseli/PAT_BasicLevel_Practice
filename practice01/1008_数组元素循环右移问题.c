#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

void change(int *p, int n)
{
	int i;

	for (i = n; i > 0; i--)
	{
		*(p + i) = *(p + i-1);
	}
	*p = *(p + n);
}

int main8()
{
	int i, m, input;
	int *p;
	scanf("%d%d", &input, &m);
	p = (int*)malloc(sizeof(int) * (input + 1));
	for (i = 0; i < input; i++)
	{
		scanf("%d", p + i);
	}

	for (i = 0; i < m; i++)
	{
		change(p, input);
	}

	for (i = 0; i < input; i++)
	{
		printf("%d", *(p + i));
		if (i + 1 != input)
		{
			putchar(' ');
		}
	}
	putchar('\n');

	system("pause");
	return 0;
}