#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include <string.h>
#include<stdlib.h>

typedef struct PEOPLE
{
	char name[10];
	int height;
}People;

int ComparePeo(const People *people1, const People *people2)
{
	return people1->height != people2->height ? people1->height - people2->height : strcmp(people2->name, people1->name);
}

int main5()
{
	int i, j, k, m, N, K, target;
	char people[10][1000][10] = { 0 };
	People man[10005] = { 0 };

	scanf("%d%d", &N, &K);
	for (i = 0; i < N; i++)
	{
		scanf("%s%d", &man[i].name, &man[i].height);
	}
	qsort(man, N, sizeof(People), ComparePeo);
	for (i = N - 1, k = 0; i >= 0; k++)
	{
		m = N / K;
		if (i == N - 1)
		{
			m += N % K;
		}
		target = m / 2;
		for (j = 0; j < m; j++, i--)
		{
			if (j % 2 == 0)
			{
				target += j;
			}
			else
			{
				target -= j;
			}
			strcpy(people[k][target], man[i].name);
		}
	}
	for (i = 0; i < K; i++)
	{
		m = N / K;
		if (i == 0)
		{
			m += N % K;
		}
		for (j = 0; j < m; j++)
		{
			printf("%s", people[i][j]);
			if (j + 1 != m)
			{
				putchar(' ');
			}
		}
		putchar('\n');
	}

	system("pause");
	return 0;
}

//测试点2注意每行只有一个同学的情况
