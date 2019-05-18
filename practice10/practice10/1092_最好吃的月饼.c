#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int main2()
{
	int i, j, k, N, M, tmp, max[1001] = { 0 }, sum[1001] = { 0 };

	scanf("%d%d", &N, &M);
	for (i = 0, k = 0; i < M; i++)
	{
		for (j = 1; j <= N; j++)
		{
			scanf("%d", &tmp);
			sum[j] += tmp;
			if (i == M - 1 && sum[j] > sum[max[0]])
			{
				max[0] = j;
				k = 1;
			}
			else if (i == M - 1 && sum[j] == sum[max[0]])
			{
				max[k++] = j;
			}
		}
	}
	printf("%d\n", sum[max[0]]);
	for (i = 0; i < k; i++)
	{
		printf("%d", max[i]);
		if (i != k - 1)
		{
			putchar(' ');
		}
		else
		{
			putchar('\n');
		}
	}

	system("pause");
	return 0;
}