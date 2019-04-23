#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int Cmp(const void* num1, const void* num2)
{
	return (*(int*)num1 == *(int*)num2) ? 0 : (*(int*)num1 - *(int*)num2);
}

int main5()
{
	int i, j, n, num[100005] = { 0 }, flag[100005] = { 0 };
	int max, min;

	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &num[i]);
	}
	for (i = 0; i < n; i++)
	{
		if (i == 0)
		{
			max = num[i];
		}
		if (num[i] >= max)
		{
			flag[i]++;
			max = num[i];
		}
	}
	min = num[n - 1];
	for (i = n - 1; i >= 0; i--)
	{
		if (num[i] <= min)
		{
			flag[i]++;
			min = num[i];
		}
	}
	for (i = 0, j = 0; i < n; i++)
	{
		if (flag[i] == 2)
		{
			num[j] = num[i];
			j++;
		}
	}
	qsort(num, j, sizeof(num[0]),Cmp);
	printf("%d\n", j);
	for (i = 0; i < j; i++)
	{
		printf("%d", num[i]);
		if (i != j - 1)
		{
			putchar(' ');
		}
	}
	putchar('\n');

	system("pause");
	return 0;
}