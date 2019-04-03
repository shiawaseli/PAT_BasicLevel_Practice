#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int main6()
{
	int output = 0;
	int num, tmp;
	int A, Da, B, Db;

	scanf("%d%d%d%d", &A, &Da, &B, &Db);
	
	for (tmp = 0, num = A; num > 0; num /= 10)
	{
		if (num % 10 == Da)
		{
			tmp = tmp * 10 + Da;
		}
	}
	output += tmp;
	for (tmp = 0, num = B; num > 0; num /= 10)
	{
		if (num % 10 == Db)
		{
			tmp = tmp * 10 + Db;
		}
	}
	output += tmp;

	printf("%d\n", output);


	system("pause");
	return 0;
}