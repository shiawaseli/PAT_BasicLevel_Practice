#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

#define CLK_TCK 100

int main6()
{
	int a, b;
	int hour = 0, minute = 0, second = 0;
	
	scanf("%d%d", &a, &b);
	second = (b - a + CLK_TCK / 2) / CLK_TCK;
	if (second > 60)
	{
		minute = second / 60;
		second = second % 60;
	}
	if (minute > 60)
	{
		hour = minute / 60;
		minute = minute % 60;
	}
	printf("%02d:%02d:%02d\n", hour, minute, second);

	system("pause");
	return 0;
}