#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main3()
{
	int i, j, num = 0, score = 0;
	int start, end;
	scanf("%d%d", &start, &end);

	for (i = 2; num <= end; i++)
	{
		for (j = 2; j <= sqrt(i); j++)
		{
			if (i % j == 0)
			{
				break;
			}
		}
		if (j > sqrt(i))
		{
			num++;
			if (num >= start && num <= end)
			{
				score++;
				if (score != 0 && (score-1) % 10 != 0)
				{
					putchar('*');
				}
				printf("%d", i);
				if (score % 10 == 0 && num != end)
				{
					putchar('\n');
				}
			}
		}
	}
	putchar('\n');

	system("pause");
	return 0;
}
