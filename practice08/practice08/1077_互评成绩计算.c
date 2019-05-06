#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int main7()
{
	int i, j, k, N, M;
	double tmp, sum, min, max, score[100] = { 0 };

	scanf("%d%d", &N, &M);
	for (i = 0; i < N; i++)
	{
		max = 0;
		min = M;
		scanf("%lf", &score[0]);
		for (j = 1, k = 1, sum = 0; j < N; j++, k++)
		{
			scanf("%lf", &score[k]);
			if (score[k] < 0 || score[k] > M)
			{
				k--;
				continue;
			}
			if (score[k] > max)
			{
				max = score[k];
			}
			if (score[k] < min)
			{
				min = score[k];
			}
			sum += score[k];
		}
		sum = sum - min - max;
		k = k - 3;
		tmp = (score[0] + sum / k) / 2 + 0.5;
		printf("%d\n", (int)tmp);
	}

	system("pause");
	return 0;
}