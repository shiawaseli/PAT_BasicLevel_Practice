#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int main7()
{
	int i, N, sum = 0, num[11000] = { 0 };

	scanf("%d", &N);
	for (i = 0; i <= N; i++)
	{
		num[i / 2 + i / 3 + i / 5]++;
	}
	for (i = 0; i < 11000; i++)
	{
		if (num[i] != 0)
		{
			sum++;
		}
	}
	printf("%d\n", sum);

	system("pause");
	return 0;
}

//数字最高能到 103331