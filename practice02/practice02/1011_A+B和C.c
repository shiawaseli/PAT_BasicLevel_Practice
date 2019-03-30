#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int main1()
{
	int i, n;
	double a, b, c;

	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		scanf("%lf%lf%lf", &a, &b, &c);
		if (a + b > c)
		{
			printf("Case #%d: true\n", i);
		}
		else
		{
			printf("Case #%d: false\n", i);
		}
	}
	system("pause");
	return 0;
}
