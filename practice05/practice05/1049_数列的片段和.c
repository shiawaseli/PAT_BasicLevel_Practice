#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int main9()
{
	int i, n;
	double num[100005] = { 0 }, sum = 0;

	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%lf", &num[i]);
		sum += num[i] * (n - i) * (i + 1);
	}
	printf("%.2f\n", sum);

	system("pause");
	return 0;
}
