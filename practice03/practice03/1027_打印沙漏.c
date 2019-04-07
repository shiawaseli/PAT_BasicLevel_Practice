#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int input, i = 1, j, k, n = 1, tmp;
	char ch = '*';

	scanf("%d %c", &input, &ch);
	while (n <= input)
	{
		i++;
		tmp = input - n;
		n = n + 2 * (2 * i - 1);
	}
	n = i - 1;

	for (j = 0, i = n; j < n; j++, i--)
	{
		for (k = 0; k < j; k++)
		{
			putchar(' ');
		}
		for (k = 0; k < 2 * i - 1; k++)
		{
			putchar(ch);
		}
		putchar('\n');
	}
	for (j = n - 1, i = 2; j > 0; j--, i++)
	{
		for (k = 0; k < j - 1; k++)
		{
			putchar(' ');
		}
		for (k = 0; k < 2 * i - 1; k++)
		{
			putchar(ch);
		}
		putchar('\n');
	}
	printf("%d\n", tmp);
	system("pause");
	return 0;
}