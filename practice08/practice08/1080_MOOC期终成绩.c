#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct Student
{
	char name[25];
	int p;
	int mid_term;
	int final;
	int score;
}*stu, *p, tmp;

int CompareStudent(const struct Student *stu1, const struct Student *stu2)
{
	return stu1->score == stu2->score ? strcmp(stu1->name, stu2->name) : stu2->score - stu1->score;
}

int main()
{
	int i, j, P, M, N, count = 0;

	scanf("%d%d%d", &P, &M, &N);
	stu = (struct Student *)malloc((P + M + N) * sizeof(struct Student));
	for (i = 0; i < P; i++)
	{
		scanf("%s%d", tmp.name, &tmp.p);
		if (tmp.p >= 200)
		{
			strcpy(stu[count].name, tmp.name);
			stu[count].p = tmp.p;
			stu[count].mid_term = -1;
			stu[count].final = -1;
			stu[count].score = -1;
			count++;
		}
	}
	qsort(stu, count, sizeof(struct Student), CompareStudent);
	for (i = 0; i < M; i++)
	{
		scanf("%s%d", tmp.name, &tmp.mid_term);
		p = bsearch(tmp.name, stu, count, sizeof(struct Student), strcmp);
		if (p != NULL)
		{
			p->mid_term = tmp.mid_term;
		}
	}
	for (i = 0; i < N; i++)
	{
		scanf("%s%d", tmp.name, &tmp.final);
		p = bsearch(tmp.name, stu, count, sizeof(struct Student), strcmp);
		if (p != NULL)
		{
			p->final = tmp.final;
		}
	}
	for (i = 0, j = count; i < j; i++)
	{
		if (stu[i].mid_term > stu[i].final)
		{
			stu[i].score = (int)(0.5 + 0.4 * stu[i].mid_term + 0.6 * stu[i].final);
		}
		else
		{
			stu[i].score = stu[i].final;
		}
		if (stu[i].score < 60)
		{
			stu[i].score = 0;
			count--;
		}
	}
	qsort(stu, j, sizeof(struct Student), CompareStudent);
	for (i = 0; i < count; i++)
	{
		printf("%s %d %d %d %d\n", stu[i].name, stu[i].p, stu[i].mid_term, stu[i].final, stu[i].score);
	}

	system("pause");
	return 0;
}
