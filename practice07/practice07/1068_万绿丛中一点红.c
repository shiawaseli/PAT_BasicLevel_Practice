#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#define NUM 100

int M, N, TOC;
int Judge(int arr[NUM][NUM], int row, int col)
{
	int i, x, y;
	int change[8][2] = { {-1, -1}, {-1, 0}, {-1, 1}, {0, -1}, {0, 1}, {1, -1}, {1, 0}, {1, 1} };

	for (i = 0; i < 8; i++)
	{
		x = row + change[i][0];
		y = col + change[i][1];
		if (x >= 0 && x < N && y >= 0 && y < M && abs(arr[x][y] - arr[row][col]) <= TOC)
		{
			return 0;
		}
	}

	return 1;
}

int main8()
{
	int i, j, k, x, y, a, b, flag = 0;
	int input[NUM][NUM] = { 0 };

	scanf("%d%d%d", &M, &N, &TOC);
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < M; j++)
		{
			scanf("%d", &input[i][j]);
		}
	}
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < M; j++)
		{
			if (Judge(input, i, j))
			{
				for (x = 0, k = 1; x < N; x++)
				{
					for (y = 0; y < M; y++)
					{
						if (x == i && y == j)
						{
							continue;
						}
						if (input[i][j] == input[x][y])
						{
							k = 0;
							break;
						}
					}
					if (k == 0) break;
				}
				if (k == 0) continue;
				a = i;
				b = j;
				flag++;
			}
		}
	}
	if (flag == 1)
	{
		printf("(%d, %d): %d\n", b + 1, a + 1, input[a][b]);
	}
	else if (flag > 1)
	{
		printf("Not Unique\n");
	}
	else
	{
		printf("Not Exist\n");
	}

	system("pause");
	return 0;
}
