#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

void QuickSort(double num[], int low, int high)
{
	int i = low;
	int j = high;
	double key = num[low];
	if (low < high)
	{
		while (i < j)
		{
			while (i < j && num[j] >= key)
			{
				j--;
			}
			if (i < j)
			{
				num[i] = num[j];
				i++;
			}
			while (i < j && num[i] < key)
			{
				i++;
			}
			if (i < j)
			{
				num[j] = num[i];
				j--;
			}
		}
		num[i] = key;

		QuickSort(num, low, j - 1);
		QuickSort(num, i + 1, high);
	}
}

int main()
{
	int i, j, N, num;
	double p, pi[100000] = { 0 };

	scanf("%d%lf", &N, &p);
	for (i = 0; i < N; i++)
	{
		scanf("%lf", &pi[i]);
	}
	QuickSort(pi, 0, N - 1);

	for (i = 0, num = 1; i < N; i++)
	{
		for (j = i + num; j < N; j++)
		{
			if (pi[i] * p >= pi[j])
			{
				num++;
			}
			else
			{
				break;
			}
		}
	}
	printf("%d\n", num);

	system("pause");
	return 0;
}
