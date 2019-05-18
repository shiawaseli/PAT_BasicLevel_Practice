#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main3()
{
	int i, n, check[130] = { 0 };
	char A[1005] = { 0 }, B[1005] = { 0 };//´Ë´¦Îª1000005

	scanf("%[^\n]\n%[^\n]", A, B);
	for (i = 0, n = strlen(A); i < n; i++)
	{
		if (!check[A[i]])
		{
			putchar(A[i]);
			check[A[i]]++;
		}
	}
	for (i = 0, n = strlen(B); i < n; i++)
	{
		if (!check[B[i]])
		{
			putchar(B[i]);
			check[B[i]]++;
		}
	}
	putchar('\n');

	system("pause");
	return 0;
}