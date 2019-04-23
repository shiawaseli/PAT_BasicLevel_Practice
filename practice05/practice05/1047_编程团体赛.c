#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int main7()
{
	int i, n, max, team, tmp, score, mem[10005] = { 0 };

	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d - %d %d", &team, &tmp, &score);
		mem[team] += score;
		if (i == 0)
		{
			max = team;
		}
		else if (mem[team] > mem[max])
		{
			max = team;
		}
	}
	printf("%d %d\n", max, mem[max]);
	
	system("pause");
	return 0;
}
