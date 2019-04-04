#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int main9()
{
	int i, j, arr[4];
	int tmp;
	int num1, num2, num3;
	scanf("%d", &num3);

	while (1)
	{
		for (i = 0; i < 4; i++)
		{
			arr[i] = num3 % 10;
			num3 /= 10;
		}
		for (i = 0, num1 = 0; i < 4; i++)
		{
			for (j = i + 1; j < 4; j++)
			{
				if (arr[i] < arr[j])
				{
					tmp = arr[i];
					arr[i] = arr[j];
					arr[j] = tmp;
				}
			}
			num1 = 10 * num1 + arr[i];
		}
		for (i = 3, num2 = 0; i >= 0; i--)
		{
			num2 = 10 * num2 + arr[i];
		}
		num3 = num1 - num2;
		printf("%04d - %04d = %04d\n", num1, num2, num3);
		if (num3 == 6174 || num3 == 0)
		{
			break;
		}
	}

	system("pause");
	return 0;
}