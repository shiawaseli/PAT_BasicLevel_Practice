#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int main2()
{
	char ch;
	int num = 0;
	//char output[10][3] = { "零", "一", "二", "三", "四", "五", "六", "七", "八", "九" };
	char output[10][5] = { "ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu" };

	while ((ch = getchar()) != '\n')
	{
		num += ch - '0';
	}
	
	if (num / 100 != 0)
	{
		printf("%s ", output[num / 100]);
	}
	if (num / 100 != 0 || num / 10 % 10 != 0)
	{
		printf("%s ", output[num / 10 % 10]);
	}
	printf("%s\n", output[num % 10]);

	system("pause");
	return 0;
}