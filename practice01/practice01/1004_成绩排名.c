#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

struct
{
	char name[11];
	char id[11];
	int score;
} stu[101];

int main4()
{
	int n, i;
	int min = 0;
	int max = 0;

	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%s%s%d", stu[i].name, stu[i].id, &stu[i].score);
		if (stu[i].score > stu[max].score)
		{
			max = i;
		}
		if(stu[i].score < stu[min].score)
		{
			min = i;
		}
	}
	printf("%s %s\n", stu[max].name, stu[max].id);
	printf("%s %s\n", stu[min].name, stu[min].id);

	system("pause");
	return 0;
}