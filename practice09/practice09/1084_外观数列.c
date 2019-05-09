#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int main4()
{
	int i, j, n, N, num;
	char str[45][10000] = { 0 };//PAT ÖÐÎª str[45][100000]

	scanf("%c%d", &str[0][0], &N);
	for (i = 0; i < N; i++)
	{
		for (j = 0, num = 1, n = 0; str[i][j] != '\0'; j++)
		{
			if (str[i][j] != str[i][j + 1])
			{
				str[i + 1][n] = str[i][j];
				str[i + 1][n + 1] = num + '0';
				num = 1;
				n += 2;
			}
			else
			{
				num++;
			}
		}
	}
	printf("%s\n", str[N - 1]);

	system("pause");
	return 0;
}