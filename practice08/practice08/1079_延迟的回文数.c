#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int Check(char num[], int n)
{
	int i;

	for (i = 0; i < n / 2; i++)
	{
		if (num[i] != num[n - i - 1])
		{
			return 0;
		}
	}

	return 1;
}

void Reverse_1079(char num1[], char num2[], int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		num2[i] = num1[n - i - 1];
	}
	num2[n] = '\0';
}

void Add(char num1[], char num2[], char num3[], int n)
{
	int i, j = 0;
	char tmp;

	for (i = 0; i < n; i++)
	{
		if (num3[i] < '0')
		{
			num3[i] = '0';
		}
		num3[i] += num1[n - i - 1] + num2[n - i - 1] - '0' - '0';
		while (num3[i] > '9')
		{
			if (num3[i + 1] < '0')
			{
				num3[i + 1] = '1';
			}
			else
			{
				num3[i + 1]++;
			}
			num3[i] = num3[i] - 10;
			j = i + 1;
		}
	}
	if (j == n)
	{
		n++;
	}
	num3[n] = '\0';
	for (i = 0; i < n / 2; i++)
	{
		tmp = num3[i];
		num3[i] = num3[n - i - 1];
		num3[n - i - 1] = tmp;
	}
}

void Delete(char num[])
{
	int i, n = strlen(num);

	for (i = 0; i < n; i++)
	{
		num[i] = '\0';
	}
}

int main9()
{
	int n, i = 0;
	char num1[1025] = { 0 }, num2[1025] = { 0 }, num3[1025] = { 0 };

	scanf("%s", num1);
	n = strlen(num1);
	while (!Check(num1, n) && i++ < 10)
	{
		Reverse_1079(num1, num2, n);
		Add(num1, num2, num3, n);
		printf("%s + %s = %s\n", num1, num2, num3);
		strcpy(num1, num3);
		Delete(num3);
		n = strlen(num1);
	}
	if (i <= 10)
	{
		printf("%s is a palindromic number.\n", num1);
	}
	else
	{
		printf("Not found in 10 iterations.\n");
	}

	system("pause");
	return 0;
}