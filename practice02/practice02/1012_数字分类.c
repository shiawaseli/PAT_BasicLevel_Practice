#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int main2()
{
	int i, j, n, flag = 0, input, a[5] = { 0 };
	scanf("%d", &n);

	for (i = 0, j = 0; i < n; i++)
	{
		scanf("%d", &input);
		switch (input % 5)
		{
		case 0:
			if (input % 2 == 0)
			{
				a[0] += input;
			}
			break;
		case 1:
			flag = (flag == 1) ? -1 : 1;
			a[1] += flag * input;
			break;
		case 2:
			a[2]++;
			break;
		case 3:
			a[3] += input;
			j++;
			break;
		case 4:
			if (input > a[4])
			{
				a[4] = input;
			}
			break;
		}
	}
	if (a[0] != 0)
	{
		printf("%d ", a[0]);
	}
	else
	{
		printf("N ");
	}
	if (a[1] != 0 || flag != 0)//a[1]也可能为0
	{
		printf("%d ", a[1]);
	}
	else
	{
		printf("N ");
	}
	if (a[2] != 0)
	{
		printf("%d ", a[2]);
	}
	else
	{
		printf("N ");
	}
	if (a[3] != 0)
	{
		printf("%.1f ", 1.0 * a[3] / j);
	}
	else
	{
		printf("N ");
	}
	if (a[4] != 0)
	{
		printf("%d", a[4]);
	}
	else
	{
		printf("N");
	}

	system("pause");
	return 0;
}