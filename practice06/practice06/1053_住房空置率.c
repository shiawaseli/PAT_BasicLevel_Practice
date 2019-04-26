#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int main3()
{
	int D, N, d, i, j, count;
	double e, tmp, vacant = 0, possible_vacant = 0;

	scanf("%d%lf%d", &N, &e, &D);
	for (i = 0; i < N; i++)
	{
		scanf("%d", &d);
		for (j = 0, count = 0; j < d; j++)
		{
			scanf("%lf", &tmp);
			if (tmp < e)
			{
				count++;
			}
		}
		if (count > d / 2 && d > D)
		{
			vacant++;
		}
		else if (count > d / 2)
		{
			possible_vacant++;
		}
	}
	printf("%.1f%% %.1f%%\n", 100 * possible_vacant / N, 100 * vacant / N);

	system("pause");
	return 0;
}