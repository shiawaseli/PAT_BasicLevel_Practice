#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include <string.h>
#include<stdlib.h>

int main4()
{
	int N, i, count = 0;
	double num, sum = 0;
	char tmp[100] = { 0 }, input[100] = { 0 };

	scanf("%d", &N);
	while (N > 0)
	{
		scanf("%s", input);
		N--;
		sscanf(input, "%lf", &num);//将字符串转为浮点数类型 
		sprintf(tmp, "%.2f", num);//将浮点数精确到小数点后两位并转为字符串
		for (i = 0; input[i] != '\0'; i++)
		{
			if (input[i] != tmp[i])
			{
				break;
			}
		}
		if (input[i] != '\0' || num > 1000 || num < -1000)
		{
			printf("ERROR: %s is not a legal number\n", input);
			continue;
		}
		sum += num;
		count++;
	}
	if (count == 0)
	{
		printf("The average of 0 numbers is Undefined\n");
	}
	else if (count == 1)
	{
		printf("The average of %d number is %.2f\n", count, sum / count);
	}
	else
	{
		printf("The average of %d numbers is %.2f\n", count, sum / count);
	}

	system("pause");
	return 0;
}