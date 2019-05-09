#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int main3()
{
	int i, N, tmp, num[100005] = { 0 };

	scanf("%d", &N);
	for (i = 1; i <= N; i++)
	{
		scanf("%d", &tmp);
		num[abs(tmp - i)]++;
	}
	for (i = N - 1; i >= 0; i--)
	{
		if (num[i] > 1)
		{
			printf("%d %d\n", i, num[i]);
		}
	}

	system("pause");
	return 0;
}