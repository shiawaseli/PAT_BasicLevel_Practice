#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i, j, n, a[3], input;
	
	scanf("%d", &input);
	for(n = 0; input != 0 && n < 3; n++)
	{
		a[n] = input % 10;
		input = input / 10; 
	}
	for (j = n-1, i = 1; j >= 0; j--)
	{
		for ( ; a[j] != 0; a[j]--)
		{
			if (j == 2)
			{
				putchar('B');
			}
			else if (j == 1)
			{
				putchar('S');
			}
			else
			{
				printf("%d", i++);
			}
		}
	}
	putchar('\n');

	system("pause");
	return 0;
}