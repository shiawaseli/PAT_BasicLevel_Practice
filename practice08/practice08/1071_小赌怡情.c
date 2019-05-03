#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int main1()
{
	int i, n1, n2, b, t, T, K, flag;

	scanf("%d%d", &T, &K);
	for (i = 0; i < K; i++)
	{
		flag = 0;
		scanf("%d%d%d%d", &n1, &b, &t, &n2);
		if (n2 > n1 && b == 1)
		{
			flag = 1;
		}
		else if (n2 < n1 && b == 0)
		{
			flag = 1;
		}
		if (t > T)
		{
			printf("Not enough tokens.  Total = %d.\n", T);
		}
		else if (flag == 1)
		{
			T += t;
			printf("Win %d!  Total = %d.\n", t, T);
		}
		else
		{
			T -= t;
			printf("Lose %d.  Total = %d.\n", t, T);
		}
		if (T <= 0)
		{
			printf("Game Over.\n");
			break;
		}
	}

	system("pause");
	return 0;
}