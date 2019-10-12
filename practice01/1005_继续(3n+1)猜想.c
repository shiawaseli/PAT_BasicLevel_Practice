#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int main5()
{
	int i, j, n, tmp, a[100];

	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
		for (j = 0; j < i; j++)
		{
			if (a[i] == a[j])
			{
				a[i] = 0;
			}
		}
	}

	for (i = 0; i < n; i++)
	{
		tmp = a[i];
		while (tmp != 2 && tmp != 0)
		{
			if (tmp % 2 == 0)
			{
				tmp = tmp / 2;
			}
			else
			{
				tmp = (3 * tmp + 1) / 2;
			}
			for (j = 0; j < n; j++)
			{
				if (a[j] == tmp)
				{
					a[j] = 0;
				}
			}
		}
	}
	for (i = 0; i < n; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (a[i] < a[j])
			{
				tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}
	for(i = 0; a[i] > 0; i++)
	{
		printf("%d", a[i]);
		if (a[i + 1] != 0)
		{
			putchar(' ');
		}
	}
	putchar('\n');
	
	system("pause");
	return 0;
}