#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main9()
{
	int i, j, M, N, S, position, count = 0;
	char name[1005][25] = { 0 }, people[25] = { 0 };

	scanf("%d%d%d", &M, &N, &S);
	position = S - 1;
	for (i = 0; i < M; i++)
	{
		scanf("%s", people);
		if (position == i)
		{
			for (j = 0; j < count; j++)
			{
				if (!strcmp(name[j], people))
				{
					break;
				}
			}
			if (j == count)
			{
				printf("%s\n", people);
				strcpy(name[j], people);
				count++;
				position += N;
			}
			else
			{
				position++;
			}
		}
	}
	if (count == 0)
	{
		printf("Keep going...\n");
	}
	
	system("pause");
	return 0;
}
//注意有可能下一位也是中过奖的人