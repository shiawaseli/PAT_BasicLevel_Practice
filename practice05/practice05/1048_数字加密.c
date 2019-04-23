#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	int i, j, tmp, flag;
	char A[105] = { 0 }, B[105] = { 0 }, C[105] = { 0 };

	scanf("%s%s", A, B);
	i = strlen(A) - 1;
	j = strlen(B) - 1;
	for (flag = 1; i >= 0; i--, flag++)
	{
		if (j < 0)
		{
			C[i] = '0';
		}
		else
		{
			C[i] = B[j];
			B[j] = '\0';
			j--;
		}
		if (flag % 2 == 1)
		{
			tmp = (C[i] + A[i] - '0' - '0') % 13;
			switch (tmp)
			{
			case 10:
				C[i] = 'J';
				break;
			case 11:
				C[i] = 'Q';
				break;
			case 12:
				C[i] = 'K';
				break;
			default:
				C[i] = tmp + '0';
				break;
			}
		}
		else
		{
			tmp = C[i] - A[i];
			if (tmp < 0)
			{
				tmp += 10;
			}
			C[i] = tmp + '0';
		}
	}
	if (j >= 0)
	{
		strcat(B, C);
	}
	else
	{
		strcpy(B, C);
	}
	printf("%s\n", B);

	system("pause");
	return 0;
}

// 本题要求实现一种数字加密方法。首先固定一个加密用正整数 a，对任一正整数 b，将其每 1 位数字与 a 的对应位置上的
// 数字进行以下运算：对奇数位，对应位的数字相加后对 13 取余——这里用 j 代表 10、q 代表 11、k 代表 12；对偶数位，
// 用 b 的数字减去 a 的数字，若结果为负数，则再加 10。这里令个位为第 1 位。
//输入格式：
//输入在一行中依次给出 a 和 b，均为不超过 100 位的正整数，其间以空格分隔。
//输出格式：
//在一行中输出加密后的结果。
//输入样例：
//1234567 368782971
//输出样例：
//3695q8118