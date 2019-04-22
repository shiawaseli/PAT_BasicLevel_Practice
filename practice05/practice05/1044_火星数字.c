#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define SPARK 13

int ChangeToEarth(char str[])
{
	int i;
	char tmp[10] = { 0 };
	char spark[13][5] = { "tret", "jan", "feb", "mar", "apr", "may", "jun", "jly", "aug", "sep", "oct", "nov", "dec" };
	char spark2[12][4] = { "tam", "hel", "maa", "huh", "tou", "kes", "hei", "elo", "syy", "lok", "mer", "jou" };

	for (i = 0;  str[i] != '\0'; i++)
	{
		tmp[i] = str[i];
	}
	for (i = 0; i < 13; i++)
	{
		if (!strcmp(tmp, spark[i]))
		{
			return i;
		}
	}
	for (i = 0; i < 12; i++)
	{
		if (!strcmp(tmp, spark2[i]))
		{
			return (i + 1) * SPARK;
		}
	}

	return 0;
}

void ChangeToSpark(char str[])
{
	int num = atoi(str);
	char spark[13][5] = { "tret", "jan", "feb", "mar", "apr", "may", "jun", "jly", "aug", "sep", "oct", "nov", "dec" };
	char spark2[12][4] = { "tam", "hel", "maa", "huh", "tou", "kes", "hei", "elo", "syy", "lok", "mer", "jou" };

	if (num >= 13)
	{
		strcpy(str, spark2[num / 13 - 1]);
		if (num % 13)
		{
			strcat(str, " ");
			strcat(str, spark[num % 13]);
		}
	}
	else
	{
		strcpy(str, spark[num % 13]);
	}
}

int main4()
{
	int n, ret;
	char ch, input[10] = { 0 };

	scanf("%d", &n);
	while (n != 0)
	{
		ret = 0;
		scanf("%s", input);
		ch = getchar();
		if (input[0] >= '0' && input[0] <= '9')
		{
			ChangeToSpark(input);
			printf("%s\n", input);
		}
		else
		{
			ret += ChangeToEarth(input);
			if (ch == ' ')
			{
				scanf("%s", input);
				ret += ChangeToEarth(input);
			}
			printf("%d\n", ret);
		}
		n--;
	}

	system("pause");
	return 0;
}