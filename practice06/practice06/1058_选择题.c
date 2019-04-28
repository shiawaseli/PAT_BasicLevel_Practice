#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

void GetChoice(int arr[][6], int k)
{
	int i, n;
	char ch;
	
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		while ((ch = getchar()) == ' ' || ch == '\n');
		arr[k][ch - 'a']++;
	}
}

int Compare(int arr[][6], int score[][6], int k)
{
	int i, flag = 1;

	for (i = 0; i < 5; i++)
	{
		if (flag == 1 && arr[k][i] != score[k][i])
		{
			score[k][5] += 1;
			flag = 0;
		}
		arr[k][i] = 0;
	}

	return flag;
}

int main8()
{
	int i, j, N, M, max, grade, last[100] = { 0 };
	int score[100] = { 0 }, ans[100][6] = { 0 }, input[100][6] = { 0 };
	char ch;

	scanf("%d%d", &N, &M);
	for (i = 0; i < M; i++)
	{
		scanf("%d%d", &score[i], &j);//此处j吞掉每道题的选项数
		GetChoice(ans, i);
	}
	for (j = 0; j < N; j++)
	{
		for (i = 0, grade = 0; i < M; i++)
		{
			while ((ch = getchar()) != '(');
			GetChoice(input, i);
			if (Compare(input, ans, i))
			{
				grade += score[i];
			}
		}
		printf("%d\n", grade);
	}
	for (i = 1, max = 0; i < M; i++)
	{
		if (ans[i][5] > ans[max][5])
		{
			max = i;
			last[0] = i;
			j = 1;
		}
		else if (ans[i][5] == ans[max][5])
		{
			last[j] = i;
			j++;
		}
	}
	if (ans[max][5] == 0)
	{
		printf("Too simple\n");
	}
	else
	{
		printf("%d ", ans[max][5]);
		for (i = 0; i < j; i++)
		{
			printf("%d", last[i] + 1);
			if (i + 1 != j)
			{
				putchar(' ');
			}
		}
		putchar('\n');
	}

	system("pause");
	return 0;
}