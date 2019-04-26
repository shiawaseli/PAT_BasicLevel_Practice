#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int main6()
{
	int i, j, N, sum = 0, num[10] = { 0 };

	scanf("%d", &N);
	for (i = 0; i < N; i++)
	{
		scanf("%d", &num[i]);
	}
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			if (i == j)
			{
				continue;
			}
			sum += 10 * num[i] + num[j];
		}
	}
	printf("%d\n", sum);
	
	system("pause");
	return 0;
}