#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

typedef struct
{
	int id;
	int length;
}Node;

int main()
{
	int i, x, y, N;
	Node max, min, tmp;

	scanf("%d", &N);
	for (i = 0; i < N; i++)
	{
		scanf("%d%d%d", &tmp.id, &x, &y);
		tmp.length = x * x + y * y;
		if (i == 0)
		{
			max.id = tmp.id;
			max.length = tmp.length;
			min.id = tmp.id;
			min.length = tmp.length;
		}
		else if (tmp.length > max.length)
		{
			max.id = tmp.id;
			max.length = tmp.length;
		}
		else if (tmp.length < min.length)
		{
			min.id = tmp.id;
			min.length = tmp.length;
		}
	}
	printf("%04d %04d\n", min.id, max.id);

	system("pause");
	return 0;
}