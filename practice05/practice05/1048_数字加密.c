#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main8()
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