#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int main5()
{
	int i, j, k, N, M, tmp, count, people[100005] = { 0 }, flag[100005] = { 0 };

	scanf("%d", &N);
	for (i = 0; i < N; i++)
	{
		scanf("%d%d", &j, &k);
		people[j] = k;
		people[k] = j;
	}
	scanf("%d", &M);
	count = M;
	for (i = 0; i < M; i++)
	{
		scanf("%d", &tmp);
		if (flag[people[tmp]] == 1)
		{
			count -= 2;
			flag[tmp] = 2;
			flag[people[tmp]] = 2;
		}
		else
		{
			flag[tmp] = 1;
		}
	}
	printf("%d\n", count);
	for (i = 0, j = 0; j < count; i++)
	{
		if (flag[i] == 1)
		{
			printf("%05d", i);
			j++;
			if (j != count)
			{
				putchar(' ');
			}
		}
	}
	if (count != 0)
	{
		putchar('\n');
	}

	system("pause");
	return 0;
}

// �����������Ϊ0����Ӧ��������С�
// 00000 Ҳ�ǺϷ� ID ����ó�ʼ��Ϊ������������Ŀ��û�п���Ϊ 00000 �����