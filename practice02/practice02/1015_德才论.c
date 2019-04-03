#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

typedef struct
{
	int id;
	int score1;
	int score2;
	int total;
}Stu;

int main5()
{
	int i, j, k, n, line1, line2;
	Stu *pstu, tmp;
	scanf("%d%d%d", &n, &line1, &line2);
	pstu = (Stu*)malloc(sizeof(Stu) * n);
	for (i = 0, k = n; i < n; i++)
	{
		scanf("%d%d%d", &pstu[i].id, &pstu[i].score1, &pstu[i].score2);
		pstu[i].total = pstu[i].score1 + pstu[i].score2;
		if (pstu[i].score1 < line1 || pstu[i].score2 < line1)
		{
			k--;
		}
		else if (pstu[i].score1 >= line2 && pstu[i].score2 >= line2)
		{
			pstu[i].total += 400;
		}
		else if (pstu[i].score1 >= line2)
		{
			pstu[i].total += 300;
		}
		else if (pstu[i].score1 >= pstu[i].score2)
		{
			pstu[i].total += 200;
		}
		else
		{
			pstu[i].total += 100;
		}
	}
	for (i = 0; i < n; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (pstu[i].total < pstu[j].total)
			{
				tmp = pstu[i];
				pstu[i] = pstu[j];
				pstu[j] = tmp;
			}
			else if (pstu[i].total == pstu[j].total)
			{
				if (pstu[i].score1 < pstu[j].score1)
				{
					tmp = pstu[i];
					pstu[i] = pstu[j];
					pstu[j] = tmp;
				}
				else if (pstu[i].score1 == pstu[j].score1 && pstu[i].id > pstu[j].id)
				{
					tmp = pstu[i];
					pstu[i] = pstu[j];
					pstu[j] = tmp;
				}
			}
		}
	}
	printf("%d\n", k);
	for (i = 0; i < k; i++)
	{
		printf("%d %d %d\n", pstu[i].id, pstu[i].score1, pstu[i].score2);
	}
	system("pause");
	return 0;
}
