#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n = 0, i = 0;
	int input[20] = { 0 };

	while (1)
	{
		scanf("%d%d", &input[n], &input[n + 1]);
		n += 2;
		if (getchar() == '\n')
		{
			break;
		}
	}
	for (i = 0; i < n; i += 2)
	{
		input[i] = input[i] * input[i + 1];
		if (input[i + 1] != 0)
		{
			input[i + 1]--;
		}
		if (i != 0 && input[i] == 0)
		{
			continue;
		}
		else if (i != 0)
		{
			putchar(' ');
		}
		printf("%d %d", input[i], input[i + 1]);
	}
	putchar('\n');

	system("pause");
	return 0;
}