#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main3()
{
	char input[10005] = { 0 };
	int i, n, flag;
	int count[6] = { 0 };

	scanf("%s", &input);
	n = strlen(input);
	for (i = 0; i < n; i++)
	{
		if (input[i] == 'P')
		{
			count[0]++;
		}
		else if (input[i] == 'A')
		{
			count[1]++;
		}
		else if (input[i] == 'T')
		{
			count[2]++;
		}
		else if (input[i] == 'e')
		{
			count[3]++;
		}
		else if (input[i] == 's')
		{
			count[4]++;
		}
		else if (input[i] == 't')
		{
			count[5]++;
		}
	}
	while (1)
	{
		flag = 0;
		if (count[0] != 0)
		{
			flag++;
			putchar('P');
			count[0]--;
		}
		if (count[1] != 0)
		{
			flag++;
			putchar('A');
			count[1]--;
		}
		if (count[2] != 0)
		{
			flag++;
			putchar('T');
			count[2]--;
		}
		if (count[3] != 0)
		{
			flag++;
			putchar('e');
			count[3]--;
		}
		if (count[4] != 0)
		{
			flag++;
			putchar('s');
			count[4]--;
		}
		if (count[5] != 0)
		{
			flag++;
			putchar('t');
			count[5]--;
		}
		if (flag == 0)
		{
			putchar('\n');
			break;
		}
	}

	system("pause");
	return 0;
}