#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int max = 0;
	int check[128] = { 0 };
	char nmax, input;

	scanf("%c", &input);
	while (input != '\n')
	{
		if (input >= 'A' && input <= 'Z')
		{
			input += 'a' - 'A';
			check[input]++;
		}
		else if (input >= 'a' && input < 'z')
		{
			check[input]++;
		}
		if (check[input] > max)
		{
			max = check[input];
			nmax = input;
		}
		else if (check[input] == max && input < nmax)
		{
			max = check[input];
			nmax = input;
		}
		scanf("%c", &input);
	}
	printf("%c %d\n", nmax, max);
	
	system("pause");
	return 0;
}