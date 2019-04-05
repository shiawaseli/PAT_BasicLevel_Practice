#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int main3()
{
	int output[55];
	int i, n, arr[10];

	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (i = 0, n = 0; i < 10; i++)
	{
		for ( ; arr[i] > 0; n++)
		{
			output[n] = i;
			arr[i]--;
		}
	}
	for (i = 1; output[0] == 0 && i < n; i++)
	{
		if (output[i] != 0)
		{
			output[0] = output[i];
			output[i] = 0;
		}
	}
	for (i = 0; i < n; i++)
	{
		printf("%d",output[i]);
	}
	putchar('\n');

	system("pause");
	return 0;
}
