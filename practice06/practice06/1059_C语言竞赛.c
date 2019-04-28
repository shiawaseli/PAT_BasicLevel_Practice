#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int IsPrime(int n)
{
	int i;

	for (i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			return 0;
		}
	}

	return 1;
}

int main9()
{
	int i, j, N, K, tmp, flag, id[10005] = { 0 };
	char prize[10005][25] = { 0 };

	scanf("%d", &N);
	for (i = 0; i < N; i++)
	{
		scanf("%d", &id[i]);
		if (i == 0)
		{
			strcpy(prize[i], "Mystery Award");
		}
		else if (IsPrime(i + 1))
		{
			strcpy(prize[i], "Minion");
		}
		else
		{
			strcpy(prize[i], "Chocolate");
		}
	}
	scanf("%d", &K);
	for (i = 0; i < K; i++)
	{
		scanf("%d", &tmp);
		for (j = 0, flag = 0; j < N; j++)
		{
			if (tmp == id[j])
			{
				flag = 1;
				printf("%04d: %s\n", tmp, prize[j]);
				strcpy(prize[j], "Checked");
			}
		}
		if (flag == 0)
		{
			printf("%04d: Are you kidding?\n", tmp);
		}
	}
	
	system("pause");
	return 0;
}