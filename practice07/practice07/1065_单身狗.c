#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
	int i, j, count, N, M, tmp, people[100005] = { 0 }, flag[100005] = { 0 };

	scanf("%d", &N);
	for (i = 0, N = 2 * N; i < N; i += 2)
	{
		scanf("%d%d", &people[i], &people[i + 1]);
	}
	scanf("%d", &M);
	count = M;
	for (i = 0; i < M; i++)
	{
		scanf("%d", &tmp);
		for (j = 0; j < N; j += 2)
		{
			if (tmp == people[j])
			{
				flag[j] = -1;
			}
			else if (tmp == people[j + 1])
			{
				flag[j + 1] = -1;
			}
			if (flag[j] + flag[j + 1] == -2)
			{
				count -= 2;
				flag[j] = -2;
				flag[j + 1] = -2;
			}
		}

	}
	for (i = 0; i < N; i += 2)
	{
		if (flag[i] == -1)
		{
			printf("%05d", people[i]);
			count--;
			if (count != 0)
			{
				putchar(' ');
			}
		}
		else if (flag[i + 1] == -1)
		{
			printf("%05d", people[i + 1]);
			count--;
			if (count != 0)
			{
				putchar(' ');
			}
		}
		if (count == 0)
		{
			break;
		}
	}
	putchar('\n');

	system("pause");
	return 0;
}