#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int main1()
{
	int i, j, n, N, num;

	scanf("%d", &N);
	for (i = 0; i < N; i++)
	{
		scanf("%d", &num);
		if (num < 10)
		{
			n = 10;
		}
		else if(num < 100)
		{
			n = 100;
		}
		else if(num < 1000)
		{
			n = 1000;
		}
		else
		{
			n = 10000;
		}
		for (j = 1; j < 10; j++)
		{
			if (j * num * num % n == num)
			{
				printf("%d %d\n", j, j * num * num);
				break;
			}
		}
		if (j == 10)
		{
			printf("No\n");
		}
	}

	system("pause");
	return 0;
}