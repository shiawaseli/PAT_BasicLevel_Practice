#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int Compare_int(const int *a, const int *b)
{
	return *b - *a;
}

int main()
{
	int i, N, count[100005] = { 0 };

	scanf("%d", &N);
	for (i = 1; i <= N; i++)
	{
		scanf("%d", &count[i]);
	}
	qsort(&count[1], N, sizeof(int), Compare_int);
	for (i = 1; i <= N; i++)
	{
		if (count[i] <= i)
		{
			break;
		}
	}
	printf("%d\n", i - 1);

	system("pause");
	return 0;
}
