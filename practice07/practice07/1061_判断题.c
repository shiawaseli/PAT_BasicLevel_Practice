#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int main1()
{
	int i, j, N, M, tmp, sum, score[105] = { 0 }, ans[105] = { 0 };

	scanf("%d%d", &N, &M);
	for (i = 0; i < M; i++)
	{
		scanf("%d", &score[i]);
	}
	for (i = 0; i < M; i++)
	{
		scanf("%d", &ans[i]);
	}
	for (i = 0; i < N; i++)
	{
		for (j = 0, sum = 0; j < M; j++)
		{
			scanf("%d", &tmp);
			if (tmp == ans[j])
			{
				sum += score[j];
			}
		}
		printf("%d\n", sum);
	}
	
	system("pause");
	return 0;
}