#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int main1()
{
	int input, i;
	scanf("%d", &input);

	for (i = 0; input != 1; i++)
	{
		if (input % 2 == 0)
		{
			input = input / 2;
		}
		else
		{
			input = (3 * input + 1) / 2;
		}
	}
	printf("%d\n", i);

	system("pause");
	return 0;
}