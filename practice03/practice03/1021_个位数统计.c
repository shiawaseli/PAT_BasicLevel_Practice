#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	int i, digit[10] = { 0 },len;
	char input[1000];

	scanf("%s", input);
	len = strlen(input);
	for (i = 0; i < len; i++)
	{
		digit[input[i] - '0']++;
	}

	for (i = 0; i < 10; i++)
	{
		if (digit[i] != 0)
		{
			printf("%d:%d\n", i, digit[i]);
		}
	}

	system("pause");
	return 0;
}
