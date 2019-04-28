#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int main7()
{
	int sum = 0, zero = 0, one = 0;
	char input;

	while ((input = getchar()) != '\n')
	{
		if (input >= 'a' && input <= 'z')
		{
			sum += input - 'a' + 1;
		}
		else if (input >= 'A' && input <= 'Z')
		{
			sum += input - 'A' + 1;
		}
	}
	while (sum != 0)
	{
		if (sum % 2 == 1)
		{
			one++;
		}
		else
		{
			zero++;
		}
		sum = sum >> 1;
	}
	printf("%d %d\n", zero, one);
	
	system("pause");
	return 0;
}