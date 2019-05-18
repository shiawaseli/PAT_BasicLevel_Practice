#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct
{
	int score;
	char id[15];
}STU;

typedef struct
{
	int room;
	int num;
}ROOM;

int CompareStu(const void* a1, const void* a2)
{
	STU *stu1 = (STU*)a1;
	STU *stu2 = (STU*)a2;
	if (stu1->id[0] != stu2->id[0])
	{
		return stu1->id[0] - stu2->id[0];
	}
	else if (stu1->score != stu2->score)
	{
		return stu2->score - stu1->score;
	}
	else
	{
		return strcmp(stu1->id, stu2->id);
	}
}

int CompareRoom(const void* a1, const void* a2)
{
	ROOM *room1 = (ROOM*)a1;
	ROOM *room2 = (ROOM*)a2;

	if (room1->num == 0)
	{
		return 1;
	}
	if (room1->num != room2->num)
	{
		return room2->num - room1->num;
	}
	else
	{
		return room1->room - room2->room;
	}
}

int main()
{
	int i, j, k, n, N, M, tmp, sum, flag, choice;
	char class[3] = { 0 };
	ROOM room[1000];
	STU stu[10005];

	scanf("%d%d", &N, &M);
	for (i = 0; i < 1000; i++)
	{
		room[i].num = 0;
		room[i].room = i;
	}
	for (i = 0; i < N; i++)
	{
		scanf("%s%d", stu[i].id, &stu[i].score);
	}
	qsort(stu, N, sizeof(STU), CompareStu);
	for (i = 0; i < M; i++)
	{
		scanf("%d", &choice);
		flag = 0;
		switch (choice)
		{
		case 1:
			scanf("%s", class);
			printf("Case %d: %d %c\n", i + 1, choice, class[0]);
			for (j = 0; j < N; j++)
			{
				if (stu[j].id[0] == class[0])
				{
					flag = 1;
					printf("%s %d\n", stu[j].id, stu[j].score);
				}
			}
			break;
		case 2:
			scanf("%d", &tmp);
			printf("Case %d: %d %d\n", i + 1, choice, tmp);
			for (j = 0, n = 0, sum = 0; j < N; j++)
			{
				if (tmp == 100 * (stu[j].id[1] - '0') + 10 * (stu[j].id[2] - '0') + stu[j].id[3] - '0')
				{
					flag = 1;
					sum += stu[j].score;
					n++;
				}
			}
			if (flag == 1)
			{
				printf("%d %d\n", n, sum);
			}
			break;
		case 3:
			scanf("%d", &tmp);
			printf("Case %d: %d %06d\n", i + 1, choice, tmp);
			for (j = 0, k = 0; j < N; j++)
			{
				if (tmp == 100000 * (stu[j].id[4] - '0') + 10000 * (stu[j].id[5] - '0') + 1000 * (stu[j].id[6] - '0') + 100 * (stu[j].id[7] - '0') + 10 * (stu[j].id[8] - '0') + stu[j].id[9] - '0')
				{
					flag = 1;
					room[100 * (stu[j].id[1] - '0') + 10 * (stu[j].id[2] - '0') + stu[j].id[3] - '0'].num++;
				}
			}
			qsort(room, 1000, sizeof(ROOM), CompareRoom);
			for (j = 0; room[j].num != 0; j++)
			{
				printf("%d %d\n", room[j].room, room[j].num);
			}
			break;
		}
		if (flag == 0)
		{
			printf("NA\n");
		}
	}

	system("pause");
	return 0;
}