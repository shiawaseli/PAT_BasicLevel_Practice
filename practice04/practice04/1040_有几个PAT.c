#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	long long int i, A, T, n, num = 0;
	char input[100005] = { 0 };

	scanf("%s", input);
	n = strlen(input);
	for (i = n - 1, A = 0, T = 0; i >= 0; i--)
	{
		if (input[i] == 'T')
		{
			T++;
		}
		else if (input[i] == 'A')
		{
			A += T;
		}
		else
		{
			num += A;
		}
	}
	printf("%lld\n", num % 1000000007);
	
	system("pause");
	return 0;
}
