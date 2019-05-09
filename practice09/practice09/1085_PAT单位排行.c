#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>

typedef struct
{
	char sch[7];
	double sum;
	int stu;
}School;

int CompareSch(const School *sch1, const School *sch2)
{
	if ((int)sch1->sum != (int)sch2->sum)
	{
		return (int)sch2->sum - (int)sch1->sum;
	}
	else if (sch1->stu != sch2->stu)
	{
		return sch1->stu - sch2->stu;
	}
	else
	{
		return strcmp(sch1->sch, sch2->sch);
	}
}

int main5()
{
	int i, j, n, N, score;
	double flag;
	char ch, id[7] = { 0 }, str[7] = { 0 };
	School *sch;

	scanf("%d\n", &N);
	sch = (School*)malloc(N * sizeof(School));
	for (i = 0; i < N; i++)
	{
		flag = 1;
		scanf("%s%d ", id, &score);
		if (id[0] == 'B')
		{
			flag /= 1.5;
		}
		else if (id[0] == 'T')
		{
			flag *= 1.5;
		}
		for (j = 0; (ch = getchar()) != '\n'; j++)
		{
			sch[i].sch[j] = tolower(ch);
		}
		sch[i].sch[j] = '\0';
		sch[i].sum = (int)(flag * score);
		sch[i].stu = 1;
	}
	qsort(sch, N, sizeof(School), strcmp);
	for (i = N - 1, n = 1; i > 0; i--)
	{
		if (!strcmp(sch[i].sch, sch[i - 1].sch))
		{
			sch[i - 1].stu += sch[i].stu;
			sch[i - 1].sum += sch[i].sum;
			sch[i].sum = 0;
		}
		else
		{
			n++;
		}
	}
	qsort(sch, N, sizeof(School), CompareSch);
	printf("%d\n", n);
	for (i = 0, j = 1; i < n; i++)
	{
		if (i > 0 && (int)sch[i].sum != (int)sch[i - 1].sum)
		{
			j = i + 1;
		}
		printf("%d %s %d %d\n", j, sch[i].sch, (int)sch[i].sum, sch[i].stu);
	}

	system("pause");
	return 0;
}


//���ǿ��������һ�����Ե㡣��Ҳ���� ���Ե� 5
//
//�������г�ʱ�����⣬�����Ǵ𰸴��󡣻����Һó�ʱ�����ڷ���������
//
//������������Ϊ����Ҫ��    �� ��Ȩ�ֶܷ���Ϊ�Ҽ��ܷ� / 1.5 + �׼��ܷ� + �����ܷ� * 1.5����������
//
//��Ҳע�⵽���������������֡� �����������˱Ƚϵ�ʱ�򣡣�������double��double �Ƚ�
//
//�ͻ���� 1.3 < 1.5�����������ʵ����ֻȡ�������ֵĻ�   Ҫ�����Ƚϣ����� int��1.3 == (int)1.5
//