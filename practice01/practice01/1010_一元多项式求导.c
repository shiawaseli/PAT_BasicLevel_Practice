#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i = 0, j = 0;
	int input[20] = { 0 };

	while (1)
	{
		scanf("%d%d", &input[i], &input[i + 1]);
		i += 2;
		if (getchar() == '\n')
		{
			break;
		}
	}
	for (j = 0; j < i; j += 2)
	{
		input[j] = input[j] * input[j + 1];
		if (input[j + 1] != 0)
		{
			input[j + 1]--;
		}
	}
	for (j = 0; j < i; j += 2)
	{
		if (j != 0 && input[j] == 0)
		{
			continue;
		}
		if (j != 0)
		{
			putchar(' ');
		}
		printf("%d %d", input[j], input[j + 1]);
	}
	putchar('\n');

	system("pause");
	return 0;
}