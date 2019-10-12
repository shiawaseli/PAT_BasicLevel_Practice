#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main7()
{
	int i, j, n;
	int front = 0, now = 0, count = 0;

	scanf("%d", &n);
	for (i = 1; i <= n; i++)
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
			front = now;
			now = i;
			if (now - front == 2)
			{
				count++;
			}
		}
	}
	printf("%d\n", count);

	system("pause");
	return 0;
}
