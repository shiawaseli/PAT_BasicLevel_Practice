#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>

int main1()
{
	int i, j, len, N, digit, alpha;
	char password[85] = { 0 };

	scanf("%d\n", &N);
	for (i = 0; i < N; i++)
	{
		scanf("%[^\n]", password);
		getchar();
		digit = 0;
		alpha = 0;
		len = strlen(password);
		if (len < 6)
		{
			printf("Your password is tai duan le.\n");
			continue;
		}
		for (j = 0; j < len; j++)
		{
			if (isdigit(password[j]))
			{
				digit++;
			}
			else if (isalpha(password[j]))
			{
				alpha++;
			}
			else if (password[j] != '.')
			{
				printf("Your password is tai luan le.\n");
				break;
			}
		}
		if (j == len)
		{
			if (digit == 0 && alpha != 0)
			{
				printf("Your password needs shu zi.\n");
			}
			else if(digit != 0 && alpha == 0)
			{
				printf("Your password needs zi mu.\n");
			}
			else
			{
				printf("Your password is wan mei.\n");
			}
		}
	}

	system("pause");
	return 0;
}