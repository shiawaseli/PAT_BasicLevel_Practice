#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int main4()
{
	int i, j, flag = 0;
	char a[60], b[60], c[60], d[60];

	scanf("%s%s%s%s", a, b, c, d);
	for (i = 0; i < 60; i++)
	{
		if (a[i] >= 'A' && a[i] <= 'G')
		{
			if (a[i] == b[i] && flag == 0)
			{
				j = a[i] - 'A';
				switch (j)
				{
				case 0:
					printf("MON ");
					break;
				case 1:
					printf("TUE ");
					break;
				case 2:
					printf("WED ");
					break;
				case 3:
					printf("THU ");
					break;
				case 4:
					printf("FRI ");
					break;
				case 5:
					printf("SAT ");
					break;
				case 6:
					printf("SUN ");
					break;
				}
				flag++;
				continue;
			}
		}
		if (a[i] == b[i] && flag == 1)
		{
			if (a[i] <= '9' && a[i] >= '0')
			{
				j = a[i] - '0';
				printf("0%d:", j);
				break;
			}
			else if(a[i] <= 'N' && a[i] >= 'A')
			{
				j = a[i] - 'A' + 10;
				printf("%d:", j);
				break;
			}
		}
	}
	for (i = 0; i < 60; i++)
	{
		if (c[i] == d[i] && ((c[i] >= 'a' && c[i] <= 'z') || (c[i] >= 'A' && c[i] <= 'Z')))
		{
			if (i > 9)
			{
				printf("%d", i);
			}
			else
			{
				printf("0%d", i);
			}
			break;
		}
	}
	putchar('\n');

	system("pause");
	return 0;
}