#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int main6()
{
	int i, j, M, N, left, right, aim, tmp, input[505][505] = { 0 };

	scanf("%d%d%d%d%d", &M, &N, &left, &right, &aim);
	for (i = 0; i < M; i++)
	{
		for (j = 0; j < N; j++)
		{
			scanf("%d", &tmp);
			if (tmp < left || tmp > right)
			{
				input[i][j] = tmp;
			}
			else
			{
				input[i][j] = aim;
			}
		}
	}
	for (i = 0; i < M; i++)
	{
		for (j = 0; j < N; j++)
		{
			printf("%03d", input[i][j]);
			if (j + 1 != N)
			{
				putchar(' ');
			}
			else
			{
				putchar('\n');
			}
		}
	}
	
	system("pause");
	return 0;
}