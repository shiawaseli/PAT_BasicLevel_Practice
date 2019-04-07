#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

typedef struct
{
	int address;
	int num;
	int next;
}Node;

int main5()
{
	int i, j, n, m, k, roll, next;
	Node *node, tmp; 
	scanf("%d%d%d", &next, &n, &k);
	node = (Node*)malloc(sizeof(Node) * n );
	for (i = 0; i < n; i++)
	{
		scanf("%d%d%d", &node[i].address, &node[i].num, &node[i].next);
	}
	for (i = 0; i < n; i++)
	{
		for (j = i; j < n; j++)
		{
			if (node[j].address == next)
			{
				tmp = node[i];
				node[i] = node[j];
				node[j] = tmp;
				next = node[i].next;
				if (node[i].next == -1)
				{
					n = i + 1;
				}
				break;
			}
		}
	}
	roll = n / k;
	for (j = 0; j < roll; j++)
	{
		for (m = k - 1, i = j * k; i - j * k < k / 2; i++, m--)
		{
			tmp = node[i];
			node[i] = node[m + j * k];
			node[m + j * k] = tmp;
		}
	}
	node[n - 1].next = -1;
	for (i = n - 1; i > 0; i--)
	{
		node[i - 1].next = node[i].address;
	}
	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			printf("%05d %d %d\n", node[i].address, node[i].num, node[i].next);
			break;
		}
		printf("%05d %d %05d\n", node[i].address, node[i].num, node[i].next);
	}
	system("pause");
	return 0;
}