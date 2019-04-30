#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int main4()
{
	int i, N, tmp, input, count, num[40] = { 0 };

	scanf("%d", &N);
	for (i = 0, count = 0; i < N; i++)
	{
		tmp = 0;
		scanf("%d", &input);
		while (input != 0)
		{
			tmp += input % 10;
			input /= 10;
		}
		num[tmp]++;
		if (num[tmp] == 1)
		{
			count++;
		}
	}
	printf("%d\n", count);
	for (i = 0; i < 40; i++)
	{
		if (num[i] > 0)
		{
			printf("%d", i);
			count--;
			if (count == 0)
			{
				break;
			}
			putchar(' ');
		}
	}
	putchar('\n');

	system("pause");
	return 0;
}