#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int main9()
{
	int i, j, k, m, N, input[105] = { 0 }, lie[105] = { 0 };

	scanf("%d", &N);
	for (i = 0; i < N; i++)
	{
		scanf("%d", &input[i]);
	}
	for (i = 0; i < N; i++)
	{
		for (j = i + 1; j < N; j++)
		{
			for (k = 0, m = 0; k < N; k++)
			{
				if (input[k] < 0 && (abs(input[k]) == i + 1 || abs(input[k]) == j + 1))
				{
					//true
				}
				else if (input[k] > 0 && abs(input[k]) != i + 1 && abs(input[k]) != j + 1)
				{
					//true
				}
				else
				{
					lie[m++] = k;
				}
			}
			if (m == 2 && ((lie[0] != i && lie[0] != j && (lie[1] == i || lie[1] == j)) || ((lie[0] == i || lie[0] == j) && lie[1] != i && lie[1] != j)))
			{
				printf("%d %d\n", i + 1, j + 1);
				goto end;
			}
		}
	}
	printf("No Solution\n");
	end:

	system("pause");
	return 0;
}