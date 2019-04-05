#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int main2()
{
	double A, B, C;
	int i, D;
	char ch[32];
	scanf("%lf%lf%d", &A, &B, &D);
	C = A + B;
	if (C < 1)
	{
		printf("0");
	}
	for (i = 0; C >= 1; i++)
	{
		ch[i] = ((char)(C - D * (int)(C / D))) + '0';
		C = C / D;
	}
	while (i > 0)
	{
		i--;
		printf("%c", ch[i]);
	}
	putchar('\n');

	system("pause");
	return 0;
}
