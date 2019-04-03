#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int main7()
{
	char A[1000], Q[1000];
	int B, R = 0;
	int i, j, len;
	scanf("%s%d", A, &B);
	len = strlen(A);

	for (i = 0,j = 0; j < len; i++, j++)
	{
		Q[i] = (A[j] + 10 * R - '0') / B + '0';
		R = (A[j] + 10 * R - '0') % B;
		if (i == 0 && Q[i] == '0')
		{
			i--;
		}
	}
	Q[i] = '\0';
	len = strlen(Q);
	if (!len)
	{
		printf("0 %d\n", R);
	}
	else
	{
		printf("%s %d\n", Q, R);
	}

	system("pause");
	return 0;
}
