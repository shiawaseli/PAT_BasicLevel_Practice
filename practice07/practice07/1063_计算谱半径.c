#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
	int i, x, y, N;
	double tmp, max = 0;

	scanf("%d", &N);
	for (i = 0; i < N; i++)
	{
		scanf("%d%d", &x, &y);
		tmp = sqrt(x * x + y * y);
		if (tmp > max)
		{
			max = tmp;
		}
	}
	printf("%.2f\n", max);
	
	system("pause");
	return 0;
}