#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

typedef struct
{
	int id;
	int score1;
	int score2;
	int total;
}Stu;

void QuickSort(Stu num[], int low, int high)
{
	int i = low;
	int j = high;
	Stu key = num[low];
	if (low < high)
	{
		while (i < j)
		{
			while (i < j && num[j].total <= key.total)
			{
				j--;
			}
			if (i < j)
			{
				num[i] = num[j];
				i++;
			}
			while (i < j && num[i].total > key.total)
			{
				i++;
			}
			if (i < j)
			{
				num[j] = num[i];
				j--;
			}
		}
		num[i] = key;

		QuickSort(num, low, j - 1);
		QuickSort(num, i + 1, high);
	}
}

void RE(Stu pstu[], int n)
{
	int i;
	Stu tmp;

	for (i = 0; i < n - 1; i++)
	{
		if (pstu[i].total == pstu[i + 1].total)
		{
			if (pstu[i].score1 < pstu[i + 1].score1)
			{
				tmp = pstu[i];
				pstu[i] = pstu[i + 1];
				pstu[i + 1] = tmp;
				i = i - 2;
			}
			else if (pstu[i].score1 == pstu[i + 1].score1 && pstu[i].id > pstu[i + 1].id)
			{
				tmp = pstu[i];
				pstu[i] = pstu[i + 1];
				pstu[i + 1] = tmp;
				i = i - 2;
			}
		}
	}
}

int main5()
{
	int i, k, n, line1, line2;
	int n1 = 0, n2 = 0, n3 = 0, n4 = 0;
	Stu tmp, *ps1, *ps2, *ps3, *ps4;
	scanf("%d%d%d", &n, &line1, &line2);
	ps1 = (Stu*)malloc(sizeof(Stu) * n);
	ps2 = (Stu*)malloc(sizeof(Stu) * n);
	ps3 = (Stu*)malloc(sizeof(Stu) * n);
	ps4 = (Stu*)malloc(sizeof(Stu) * n);
	for (i = 0, k = n; i < n; i++)
	{
		scanf("%d%d%d", &tmp.id, &tmp.score1, &tmp.score2);
		tmp.total = tmp.score1 + tmp.score2;
		if (tmp.score1 < line1 || tmp.score2 < line1)
		{
			k--;
		}
		else if (tmp.score1 >= line2 && tmp.score2 >= line2)
		{
			ps1[n1++] = tmp;
		}
		else if (tmp.score1 >= line2)
		{
			ps2[n2++] = tmp;
		}
		else if (tmp.score1 >= tmp.score2)
		{
			ps3[n3++] = tmp;
		}
		else
		{
			ps4[n4++] = tmp;
		}
	}
	QuickSort(ps1, 0, n1 - 1);
	QuickSort(ps2, 0, n2 - 1);
	QuickSort(ps3, 0, n3 - 1);
	QuickSort(ps4, 0, n4 - 1);
	RE(ps1, n1);
	RE(ps2, n2);
	RE(ps3, n3);
	RE(ps4, n4);
	
	printf("%d\n", k);
	for (i = 0; i < n1; i++)
	{
		printf("%d %d %d\n", ps1[i].id, ps1[i].score1, ps1[i].score2);
	}
	for (i = 0; i < n2; i++)
	{
		printf("%d %d %d\n", ps2[i].id, ps2[i].score1, ps2[i].score2);
	}
	for (i = 0; i < n3; i++)
	{
		printf("%d %d %d\n", ps3[i].id, ps3[i].score1, ps3[i].score2);
	}
	for (i = 0; i < n4; i++)
	{
		printf("%d %d %d\n", ps4[i].id, ps4[i].score1, ps4[i].score2);
	}
	free(ps1);
	free(ps2);
	free(ps3);
	free(ps4);
	system("pause");
	return 0;
}
