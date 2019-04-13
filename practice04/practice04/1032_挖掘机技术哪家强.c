#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int main2()
{
	int i, N, maxsch, maxscore, tmpsch, tmpscore, school[100000] = { 0 };
	
	scanf("%d", &N);
	for (i = 0; i < N; i++)
	{
		scanf("%d%d", &tmpsch, &tmpscore);
		school[tmpsch - 1] += tmpscore;
	}
	for (i = 0, maxscore = 0; i < N; i++)
	{
		if (school[i] >= maxscore)
		{
			maxsch = i + 1;
			maxscore = school[i];
		}
	}
	printf("%d %d\n", maxsch, maxscore);
	system("pause");
	return 0;
}
