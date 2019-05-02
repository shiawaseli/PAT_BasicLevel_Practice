#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i, N, tmp;
	int roop[10001] = { 0 };
	double cur = 0;

	scanf("%d", &N);
	for (i = 0; i < N; i++)
	{
		scanf("%d", &tmp);
		roop[tmp]++;
	}
	for (i = 0; i <10001; i++)
	{
		if (cur == 0 && roop[i] != 0)
		{
			cur = i;
			continue;
		}
		while (roop[i] != 0)
		{
			cur = (cur + i) / 2;
			roop[i]--;
		}
	}
	printf("%d\n", (int)cur);

	system("pause");
	return 0;
}