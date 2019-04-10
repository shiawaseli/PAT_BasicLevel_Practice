#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

typedef struct
{
	char name[20];
	int year;
	int month;
	int day;
	int judge;
}People;

int main8()
{
	int i, n, num;
	People *p, tmp, max, min;

	scanf("%d", &n);
	p = (People*)malloc(n * sizeof(People));
	for (i = 0, num = 0; i < n; i++)
	{
		scanf("%s%d/%d/%d", tmp.name, &tmp.year, &tmp.month, &tmp.day);
		tmp.judge = 10000 * tmp.year + 100 * tmp.month + tmp.day;
		if (tmp.judge < 18140906 || tmp.judge > 20140906)
		{
			continue;
		}
		p[num] = tmp;
		if (num == 0)
		{
			max = p[num];
			min = p[num];
		}
		else
		{
			if (p[num].judge > max.judge)
			{
				max = p[num];
			}
			if (p[num].judge < min.judge)
			{
				min = p[num];
			}
		}
		num++;
	}
	if (num != 0)
	{
		printf("%d %s %s\n", num, min.name, max.name);
	}
	else
	{
		printf("%d\n", num);
	}
	free(p);

	system("pause");
	return 0;
}