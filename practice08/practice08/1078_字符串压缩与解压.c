#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int main8()
{
	int i, count;
	char ch, str[1005] = { 0 };

	ch = getchar();
	getchar();
	scanf("%[^\n]", str);
	if (ch == 'C')
	{
		for (i = 0, count = 0; str[i] != '\0'; i++)
		{
			if (str[i] == str[i + 1])
			{
				count++;
			}
			else if (str[i] != str[i + 1])
			{
				if (count != 0)
				{
					printf("%d", count + 1);
				}
				printf("%c", str[i]);
				count = 0;
			}
		}
	}
	else if(ch == 'D')
	{
		for (i = 0, count = 0; str[i] != '\0'; i++)
		{
			if (str[i] >= '0' && str[i] <= '9')
			{
				while (str[i] >= '0' && str[i] <= '9')
				{
					count = 10 * count + str[i] - '0';
					i++;
				}
			}
			else
			{
				putchar(str[i]);
			}
			while (count != 0)
			{
				putchar(str[i]);
				count--;
			}
		}
	}
	putchar('\n');

	system("pause");
	return 0;
}