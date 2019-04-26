#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int InputSym(char sym[12][6])
{
	int i = 0, j = 0, flag = 0;
	char ch;

	while ((ch = getchar()) != '\n')
	{
		if (ch == '[')
		{
			flag = 1;
			continue;
		}
		else if (ch == ']')
		{
			flag = 0;
			i++;
			j = 0;
			continue;
		}
		if (flag == 1)
		{
			sym[i][j++] = ch;
		}
	}

	return i;
}

int main2()
{
	int i, x, y, z, K, flag = 1, choice[5] = { 0 };
	char hand[12][6] = { 0 }, eye[12][6] = { 0 }, mouth[12][6] = { 0 };

	x = InputSym(hand);
	y = InputSym(eye);
	z = InputSym(mouth);
	scanf("%d", &K);
	while (K > 0)
	{
		K--;
		for (i = 0; i < 5; i++)
		{
			scanf("%d", &choice[i]);
			if (choice[i] < 1)
			{
				flag = 0;
			}
		}
		if (choice[0] > x || choice[1] > y || choice[2] > z || choice[3] > y || choice[4] > x || flag == 0)
		{
			flag = 1;
			printf("Are you kidding me? @\\/@\n");
			continue;
		}
		printf("%s(%s%s%s)%s\n", hand[choice[0] - 1], eye[choice[1] - 1], mouth[choice[2] - 1], eye[choice[3] - 1], hand[choice[4] - 1]);
	}
	
	system("pause");
	return 0;
}
