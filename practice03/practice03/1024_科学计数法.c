#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int main4()
{
	char ch, input[10000] = { 0 }, output[10000] = { 0 };
	int i, j, n, flag, exp;
	scanf("%c%s", &ch, input);
	n = strlen(input);
	if (ch == '-')
	{
		putchar(ch);
	}
	for (i = 0, j = 0, flag = 0, exp = 0; i < n; i++)
	{
		if (flag == 0 && input[i] >= '0' && input[i] <= '9')
		{
			output[j] = input[i];
			j++;
		}
		else if(flag == 1)
		{
			exp = 10 * exp + input[i] - '0';
		}
		else if (input[i] == 'E')
		{
			i++;
			ch = input[i];
			flag = 1;
		}
	}
	if (ch == '-')
	{
		n = -j - exp + 1;
	}
	else
	{
		n = -j + exp + 1;
	}
	if (n < 0)
	{
		n = -n;//nÎ»Ð¡Êý
		if (n < j)
		{
			for (i = j, j++; n != 0 && i > 1; i--)
			{
				output[i] = output[i - 1];
				n--;
			}
			output[i] = '.';
		}
		else if(n >= j)
		{
			printf("0.");
			while (n != j)
			{
				printf("0");
				n--;
			}
		}
	}
	else
	{
		while (n > 0)
		{
			output[j++] = '0';
			n--;
		}
	}

	printf("%s\n", output);
	system("pause");
	return 0;
}
