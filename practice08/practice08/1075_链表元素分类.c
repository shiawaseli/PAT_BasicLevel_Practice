#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

struct 
{
	int data;
	int next;
}singlelink[100005];

int main5()
{
	int i, j, N, K, cur, add, data, next, flag;
	int *class;

	scanf("%d%d%d", &cur, &N, &K);
	class = (int*)calloc(3 * N, sizeof(int));
	for (i = 0; i < N; i++)
	{
		scanf("%d%d%d", &add, &data, &next);
		singlelink[add].data = data;
		singlelink[add].next = next;
	}
	for (i = 0; ; i++)
	{
		if (singlelink[cur].data < 0)
		{
			class[i] = cur + 1;
		}
		else if (singlelink[cur].data >= 0 && singlelink[cur].data <= K)
		{
			class[i + N] = cur + 1;
		}
		else
		{
			class[i + 2 * N] = cur + 1;
		}
		if (singlelink[cur].next == -1)
		{
			break;
		}
		cur = singlelink[cur].next;
	}
	for (i = 0, flag = 0; i < 3 * N; i++)
	{
		if (flag == 0 && class[i] != 0)
		{
			printf("%05d %d ", class[i] - 1, singlelink[class[i] - 1].data);
			flag = 1;
		}
		else if (flag == 1 && class[i] != 0)
		{
			printf("%05d\n%05d %d ", class[i] - 1, class[i] - 1, singlelink[class[i] - 1].data);
		}
	}
	printf("-1\n");

	system("pause");
	return 0;
}


//������Ҫע���������������п��ܴ��ڲ��������еķ����ݣ����Ե�4�������ڱ���ɸѡ�����ʱ����������ڵ����Ϊ׼��Ӧ�Խ�����ַ-1����Ч������Ϊ׼