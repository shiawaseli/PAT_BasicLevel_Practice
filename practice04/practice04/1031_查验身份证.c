#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#define ERROR -1
#define NORMAL 1

int main1()
{
	char forcheck[19] = { 0 };
	char check[12] = "10X98765432";
	int status[17] = { 7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2 };
	int i, j, num, sum, flag, score = 0;
	int tmp;
	scanf("%d", &num);

	for (i = 0; i < num; i++)
	{
		scanf("%s", forcheck);
		for (j = 0, sum = 0, flag = NORMAL; j < 18; j++)
		{
			if ((forcheck[j] < '0' || forcheck[j] > '9') && j != 17)
			{
				flag = ERROR;
			}
			if (flag == NORMAL && j != 17)
			{
				tmp = forcheck[j] - '0';
				sum += tmp * status[j];
			}
		}
		if (flag == ERROR || check[sum % 11] != forcheck[17])
		{
			printf("%s\n", forcheck);
		}
		else
		{
			score++;
		}
	}
	if (score == num && num != 0)
	{
		printf("All passed\n");
	}

	system("pause");
	return 0;
}