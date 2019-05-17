#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int CompareInt(const void *a, const void *b)
{
	return *(int*)a - *(int*)b;
}

int main()
{
	int i, j, N, M, K, status, G[1000] = { 0 }, pair[10005][2] = { 0 };

	scanf("%d%d", &N, &M);
	for (i = 0; i < N; i++)
	{
		scanf("%d%d", &pair[i][0], &pair[i][1]);
	}
	for (i = 0; i < M; i++)
	{
		scanf("%d", &K);
		status = 1;
		for (j = 0; j < K; j++)
		{
			scanf("%d", &G[j]);
		}
		qsort(G, K, sizeof(int), CompareInt);
		for (j = 0; j < K; j++)
		{
			if (bsearch(&pair[j][0], G, K, sizeof(int), CompareInt) && bsearch(&pair[j][1], G, K, sizeof(int), CompareInt))
			{
				printf("No\n");
				status = 0;
				break;//注意同一箱货物中可能存在多对不相容的物品，此时如果不 break 就会打印多次 No
			}
		}
		if (status)
		{
			printf("Yes\n");
		}
	}

	system("pause");
	return 0;
}