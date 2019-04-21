#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

typedef struct
{
	char id[20];
	int seat1;
	int seat2;
}Seat;

int main1()
{
	Seat *p;
	int i, j, k, n, tmp;

	scanf("%d", &n);
	p = (Seat *)malloc(n * sizeof(Seat));
	for (i = 0; i < n; i++)
	{
		scanf("%s%d%d", &p[i].id, &p[i].seat1, &p[i].seat2);
	}
	scanf("%d", &i);
	for (j = 0; j < i; j++)
	{
		scanf("%d", &tmp);
		for (k = 0; k < n; k++)
		{
			if (tmp == p[k].seat1)
			{
				printf("%s %d\n", p[k].id, p[k].seat2);
			}
		}
	}

	system("pause");
	return 0;
}