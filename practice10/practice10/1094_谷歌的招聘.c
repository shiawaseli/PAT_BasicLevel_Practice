#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int IsPrime(int num)
{
	int i;

	for (i = 2; i <= sqrt(num); i++)
	{
		if (num % i == 0)
		{
			return 0;
		}
	}
	return 1;
}

int main4()
{
	int i, k, L, K, num;
	char input[1005] = { 0 };

	scanf("%d%d%s", &L, &K, input);
	for (i = 0, k = 1, num = 0; i <= L; i++)
	{
		if (i < K)
		{
			num = 10 * num + input[i] - '0';
			k *= 10;
			continue;
		}
		else if (IsPrime(num))
		{
			printf("%0*d\n", K, num);
			break;
		}
		if (i != L)
		{
			num %= k / 10;
			num = 10 * num + input[i] - '0';
		}
	}
	if (i > L)
	{
		printf("404\n");
	}

	system("pause");
	return 0;
}

//×¢Òâ0023µÄÊä³ö