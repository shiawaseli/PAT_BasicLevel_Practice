#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i = 0, j = 0;
	char input[80][80];

	while ((input[i][j] = getchar()) != '\n')
	{
		if (input[i][j] == ' ')
		{
			input[i][j] = '\0';
			i++;
			j = 0;
			continue;
		}
		j++;
	}
	input[i][j] = '\0';

	for (; i >= 0; i--)
	{
		printf("%s", input[i]);
		if (i != 0)
		{
			putchar(' ');
		}
	}
	putchar('\n');

	system("pause");
	return 0;
}