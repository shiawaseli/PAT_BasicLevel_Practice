#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int main2()
{
	int i, j, k, N, M, K, check[6] = { 0 }, tmp, flag, count1 = 0, count2 = 0;
	char stu[5] = { 0 };

	scanf("%d%d", &N, &M);
	for (i = 0; i < M; i++)
	{
		scanf("%d", &check[i]);
	}
	for (i = 0; i < N; i++)
	{
		flag = 0;
		scanf("%s%d", stu, &K);
		for (j = 0; j < K; j++)
		{
			scanf("%d", &tmp);
			for (k = 0; k < M; k++)
			{
				if ((tmp == check[k]) && flag == 0)
				{
					printf("%s: %04d", stu, tmp);
					count1++;
					flag = 1;
				}
				else if (tmp == check[k])
				{
					printf(" %04d", tmp);
					flag++;
				}
			}
		}
		if (flag != 0)
		{
			count2 += flag;
			putchar('\n');
		}
	}
	printf("%d %d\n", count1, count2);

	system("pause");
	return 0;
}

//注意是编号的输出格式是 4 位数字