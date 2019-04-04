#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

typedef struct
{
	double store;
	double price;
	double rate;
}Goods;

int main()
{
	int i, j, kind, need;
	double sum = 0;
	Goods *p[1000], *tmp;

	scanf("%d%d", &kind, &need);
	for (i = 0; i < kind; i++)
	{
		p[i] = (Goods*)malloc(sizeof(Goods));
		scanf("%lf", &p[i]->store);
	}
	for (i = 0; i < kind; i++)
	{
		scanf("%lf", &p[i]->price);
		p[i]->rate = p[i]->price / p[i]->store;
	}
	for (i = 0; i < kind; i++)
	{
		for (j = i + 1; j < kind; j++)
		{
			if (p[i]->rate < p[j]->rate)
			{
				tmp = p[i];
				p[i] = p[j];
				p[j] = tmp;
			}
		}
	}
	
	for (i = 0; i < kind && need != 0; i++)
	{
		if (p[i]->store > need)
		{
			sum += need * p[i]->rate;
			need = 0;
		}
		else
		{
			sum += p[i]->store * p[i]->rate;
			need -= p[i]->store;
		}
	}
	for (i = 0; i < kind; i++)
	{
		free(p[i]);
	}
	printf("%.2f\n", sum);

	system("pause");
	return 0;
}