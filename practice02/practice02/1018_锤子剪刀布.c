#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int main8()
{
	int i = 0, j = 0, k = 0;
	int num, win = 0, draw = 0, lose = 0;
	int aj = 0, ab = 0, ac = 0, bj = 0, bb = 0 , bc = 0;
	char A, B, Awin, Alose;
	scanf("%d", &num);
	getchar();

	while (num != 0)
	{
		num--;
		scanf("%c %c", &A, &B);
		getchar();
		switch (A + B)
		{
		case 'J' + 'B':
			if (A == 'J')
			{
				win++;
				aj++;
			}
			else
			{
				lose++;
				bj++;
			}
			break;
		case 'B' + 'C':
			if (A == 'B')
			{
				win++;
				ab++;
			}
			else
			{
				lose++;
				bb++;
			}
			break;
		case 'C' + 'J':
			if (A == 'C')
			{
				win++;
				ac++;
			}
			else
			{
				lose++;
				bc++;
			}
			break;
		default:
			draw++;
			break;
		}
	}
	if (aj > ab && aj > ac)
	{
		Awin = 'J';
	}
	else if(ab >= aj && ab >= ac)
	{
		Awin = 'B';
	}
	else if (ac >= aj && ac > ab)
	{
		Awin = 'C';
	}
	if (bj > bb && bj > bc)
	{
		Alose = 'J';
	}
	else if (bb >= bj && bb >= bc)
	{
		Alose = 'B';
	}
	else if (bc >= bj && bc > bb)
	{
		Alose = 'C';
	}
	printf("%d %d %d\n", win, draw, lose);
	printf("%d %d %d\n", lose, draw, win);
	printf("%c %c\n", Awin, Alose);
	system("pause");
	return 0;
}