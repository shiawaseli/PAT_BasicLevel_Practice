#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int main3()
{
	int i, j, n, flag;
	int left, mid, right;
	char input[100] = { 0 };

	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%s", input);
		j = 0;
		flag = 1;
		left = mid = right = 0;

		while (input[j] == 'P' || input[j] == 'A' || input[j] == 'T')
		{
			if (flag == 1)
			{
				if (input[j] == 'P')
				{
					flag = 2;
					j++;
					continue;
				}
				if (input[j] == 'T')
				{
					flag = 0;
					break;
				}
				left++;
			}
			else if (flag == 2)
			{
				if (input[j] == 'T')
				{
					flag = 3;
					j++;
					continue;
				}
				if (input[j] == 'P')
				{
					flag = 0;
					break;
				}
				mid++;
			}
			else
			{
				if(input[j] != 'A')
				{
					flag = 0;
					break;
				}
				right++;
			}
			j++;
		}
		if (flag == 3 && left * mid == right && mid != 0)
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
	}

	system("pause");
	return 0;
}
