#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int M, N, TOC;
int Judge(int arr[1005][1005], int row, int col)
{
	int i, x, y;
	int change[8][2] = { {-1, -1}, {-1, 0}, {-1, 1}, {0, -1}, {0, 1}, {1, -1}, {1, 0}, {1, 1} };

	for (i = 0; i < 8; i++)
	{
		x = row + change[i][0];
		y = col + change[i][1];
		if (x >= 0 && x < N && y >= 0 && y < M && abs(arr[x][y] - arr[row][col]) > TOC)
		{
			return 0;
		}
	}

	return 1;
}

int main()
{
	int i, j, flag = 0;
	int input[1005][1005] = { 0 }, map[1 << 25] = { 0 };

	scanf("%d%d%d", &M, &N, &TOC);
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < M; j++)
		{
			scanf("%d", &input[i][j]);
			map[input[i][j]]++;
		}
	}
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < M; j++)
		{
			if (map[input[i][j]] == 1 && Judge(input, i, j))
			{
				flag++;
			}
		}
	}
	if (flag == 1)
	{
		printf("(%d, %d): %d\n", i + 1, j + 1, input[i][j]);
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
