#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int main6()
{
	int i, j, N;
	char ch;

	scanf("%d %c", &N, &ch);
	for (i = 0; i < (N + 1) / 2; i++)
	{
		if (i == 0 || i == (N + 1) / 2 - 1)
		{
			for (j = 0; j < N; j++)
			{
				printf("%c", ch);
			}
			putchar('\n');
		}
		else
		{
			for (j = 0; j < N; j++)
			{
				if (j == 0 || j == N - 1)
				{
					putchar(ch);
				}
				else
				{
					putchar(' ');
				}
			}
			putchar('\n');
		}
	}
	
	system("pause");
	return 0;
}