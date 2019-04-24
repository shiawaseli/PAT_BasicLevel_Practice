#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<math.h>
#include<stdlib.h>

#define DOWN 1
#define UP 2
#define LEFT 3
#define RIGHT 4

	int Cmp(const void* num1, const void* num2)
	{
		return *(int*)num1 - *(int*)num2;
	}

	int main()
	{
		int i, j, n, flag = RIGHT;
		int col = 0, row = 0, max = 0, num[100][100] = { 0 }, p[100] = { 0 };//应为num[10000][100]

		scanf("%d", &n);
		for (i = (int)sqrt(n); i <= n; i++)
		{
			if (n % i == 0)
			{
				if (i > n / i)
				{
					row = i;
					col = n / i;
				}
				else
				{
					row = n / i;
					col = i;
				}
				break;
			}
		}
		for (i = 0; i < n; i++)
		{
			scanf("%d", &p[i]);
		}
		qsort(p, n, sizeof(p[0]), Cmp);
		for (n = n - 1, i = 0, j = 0; n >= 0; n--)
		{
			num[i][j] = p[n];
			if (flag == DOWN)
			{
				i++;
				if (i == row || (i < row && num[i][j] != 0))
				{
					flag = LEFT;
					i--;
					j--;
				}
			}
			else if (flag == LEFT)
			{
				j--;
				if (j < 0 || (j >= 0 && num[i][j] != 0))
				{
					flag = UP;
					j++;
					i--;
				}
			}
			else if (flag == UP)
			{
				i--;
				if (i < 0 || (i >= 0 && num[i][j] != 0))
				{
					flag = RIGHT;
					i++;
					j++;
				}
			}
			else if (flag == RIGHT)
			{
				j++;
				if (j == col || (j < col && num[i][j] != 0))
				{
					flag = DOWN;
					j--;
					i++;
				}
			}
		}
		for (i = 0; i < row; i++)
		{
			for (j = 0; j < col; j++)
			{
				printf("%d", num[i][j]);
				if (j != col - 1)
				{
					putchar(' ');
				}
			}
			putchar('\n');
		}

		system("pause");
		return 0;
	}