#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i = 0, j = 0;
	char broken[100000], aim[100000];
	
	while ((broken[i] = getchar()) != '\n' && broken[i] != ' ')
	{
		i++;
		broken[i] = '\0';
	} 
	scanf("%s", aim);
	
	for (i = 0; aim[i] != '\0'; i++)
	{
		for (j = 0; broken[j] != '\0'; j++)
		{
			if (broken[j] == aim[i])
			{
				break;
			}
			if (broken[j] >= 'A' && broken[j] <= 'Z' && broken[j] - 'A' + 'a' == aim[i])
			{
				break;
			}
			if (broken[j] == '+' && aim[i] >= 'A' && aim[i] <= 'Z')
			{
				break;
			}
		}
		if (broken[j] == '\0')
		{
			printf("%c", aim[i]);
		}
	}
	putchar('\n');
	
	system("pause");
	return 0;
}