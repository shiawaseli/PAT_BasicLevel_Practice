#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int main6()
{
	int i, j, A, B, C;
	char num[20] = { 0 };

	scanf("%d%d", &A, &B);
	C = A * B;
	if (C == 0)
	{
		putchar('0');
	}
	for (i = 0; C != 0; i++)
	{
		num[i] = C % 10 + '0';
		if (num[0] == '0')
		{
			i--;
		}
		C /= 10;
	}
	for (j = 0; j < i; j++)
	{
		putchar(num[j]);
	}
	putchar('\n');

	system("pause");
	return 0;
}

//注意乘积为 0 的情况
//注意乘积为 100 等低位为 0 的情况，应输出为 1