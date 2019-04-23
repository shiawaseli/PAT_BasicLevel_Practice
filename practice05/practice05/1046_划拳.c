#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int main6()
{
	int i, n, A = 0, B = 0;
	int a1, a2, b1, b2;

	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d%d%d%d", &a1, &a2, &b1, &b2);
		if (a2 == a1 + b1 && b2 != a1 + b1)
		{
			B++;
		}
		else if (a2 != a1 + b1 && b2 == a1 + b1)
		{
			A++;
		}
	}
	printf("%d %d\n", A, B);
	
	system("pause");
	return 0;
}
