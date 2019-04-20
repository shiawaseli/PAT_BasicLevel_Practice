#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int main()
{
	char input;
	int i, n1, n2, num[126] = { 0 };

	input = getchar();
	while (input != '\n')
	{
		num[input]++;
		input = getchar();
	}
	input = getchar();
	while (input != '\n')
	{
		num[input]--;
		input = getchar();
	}
	for (i = 0, n1 = 0, n2 = 0; i < 126; i++)
	{
		if (num[i] >= 0)
		{
			n1 += num[i];
		}
		else if(num[i] < 0)
		{
			n2 += num[i];
		}
	}
	if (n2 < 0)
	{
		printf("No %d\n", -n2);
	}
	else
	{
		printf("Yes %d\n", n1);
	}
	
	system("pause");
	return 0;
}