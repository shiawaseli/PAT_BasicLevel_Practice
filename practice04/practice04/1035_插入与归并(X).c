#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#define FIND 1
#define UNFIND 0

void InsertionSort(int arr[], int n, int value)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		if (value < arr[i])
		{
			break;
		}
	}
	for (j = n; j > i; j--)
	{
		arr[j] = arr[j - 1];
	}
	arr[i] = value;
}
void MergeSort(int arr[], int n, int N)
{
	int i, j, k, tmp;

	for (k = 0; k < N / (2 * n); k++)
	{
		for (i = 0; i < 2 * n; i++)
		{
			for (j = i + 1; j < 2 * n; j++)
			{
				if (arr[i + 2 * k * n] > arr[j + 2 * k * n])
				{
					tmp = arr[i + 2 * k * n];
					arr[i + 2 * k * n] = arr[j + 2 * k * n];
					arr[j + 2 * k * n] = tmp;
				}
			}
		}
	}
	for (i = 0; N / (2 * n) == 0 && i < N; i++)
	{
		for (j = i + 1; j < N; j++)
		{
			if (arr[j] < arr[i])
			{
				tmp = arr[j];
				arr[j] = arr[i];
				arr[i] = tmp;
			}
		}
	}
}

void PrintArr(int arr[], int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		printf("%d", arr[i]);
		if (i != n - 1)
		{
			putchar(' ');
		}
	}
	putchar('\n');
}

int main5()
{
	int i, j, k, N, flag = UNFIND;
	int init[100], init1[100], processed[100];

	scanf("%d", &N);
	for (i = 0; i < N; i++)
	{
		scanf("%d", &init[i]);
		init1[i] = init[i];
	}
	for (i = 0; i < N; i++)
	{
		scanf("%d", &processed[i]);
	}

	for (i = 1; i < N; i++)
	{
		if (processed[i] < processed[i - 1])
		{
			break;
		}
	}
	for (j = i; j < N; j++)
	{
		if (processed[j] != init[j])
		{
			break;
		}
	}

	if (j == N)
	{
		printf("Insertion Sort\n");
		InsertionSort(processed, i, processed[i]);
		PrintArr(processed, N);
	}
	else
	{
		k = 1;
		printf("Merge Sort\n");
		while (flag == UNFIND)
		{
			flag = FIND;
			for (i = 0; i < N; i++)
			{
				if (init[i] != processed[i])
				{
					flag = UNFIND;
					break;
				}
			}
			for (i = 0; i < N; i = i + 2 * k)
			{
				MergeSort(init, k, N);
			}
			k *= 2;
			if (flag == FIND)
			{
				PrintArr(init, N);
			}
		}
	}
	
	system("pause");
	return 0;
}