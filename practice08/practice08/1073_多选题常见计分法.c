#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

struct
{
	double score;
	int option;
	int num;
	char ans[5];
}question[1000];

int main3()
{
	int i, j, k, m, x[100] = { 0 }, y[100] = { 0 }, M, N, num, max, flag, count, err[1000][5] = { 0 };
	double a, score;
	char ans;

	scanf("%d%d", &M, &N);
	for (i = 0; i < N; i++)
	{
		scanf("%lf%d%d", &question[i].score, &question[i].option, &question[i].num);
		for (j = 0; j < question[i].num; j++)
		{
			while ((question[i].ans[j] = getchar()) < 'a' || question[i].ans[j] > 'e');
		}
	}
	for (i = 0; i < M; i++)
	{
		score = 0;
		for (j = 0; j < N; j++)
		{
			while (getchar() != '(');
			scanf("%d", &num);
			for (k = 0, a = 1.0, count = 0; k < num; k++)
			{
				while ((ans = getchar()) < 'a' || ans > 'e');
				for (m = 0, flag = 0; m < question[j].num; m++)
				{
					if (k == 0)
					{
						err[j][question[j].ans[m] - 'a']++;
					}
					if (ans == question[j].ans[m])
					{
						err[j][ans - 'a']--;
						flag = 1;
						count++;
					}
				}
				if (!flag)
				{
					a = 0;
					err[j][ans - 'a']++;
				}
			}
			if (count != question[j].num)
			{
				a /= 2;
			}
			score += a * question[j].score;
		}
		printf("%.1f\n", score);
	}
	for (i = 0, max = 0; i < N; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (err[i][j] > max)
			{
				max = err[i][j];
				flag = 0;
				x[flag] = i;
				y[flag] = j;
			}
			else if (err[i][j] == max)
			{
				flag++;
				x[flag] = i;
				y[flag] = j;
			}
		}
	}
	if (max == 0)
	{
		printf("Too simple\n");
	}
	else
	{
		for (i = 0; i <= flag; i++)
		{
			printf("%d %d-%c\n", max, x[i] + 1, "abcde"[y[i]]);
		}
	}

	system("pause");
	return 0;
}