#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

void ArrDelete(char a[], int n)
{
	int i;
	for (i = 0; i + 1 < n; i++)
	{
		a[i] = a[i + 1];
	}
}

int main9()
{
	int i, j, k;
	char aim[85], real[85], tmp[85];

	scanf("%s", aim);
	scanf("%s", real);
	for (i = 0, k = 0; aim[i] != '\0'; i++)
	{
		for (j = 0; real[j] != '\0'; j++)
		{
			if (aim[i] == real[j])
			{
				break;
			}
		}
		if(real[j] == '\0')
		{
			if (aim[i] >= 'a' && aim[i] <= 'z')
			{
				tmp[k] = aim[i] - 'a' + 'A';
			}
			else
			{
				tmp[k] = aim[i];
			}
			k++;
		}
	}
	for (i = 0; i < k; i++)
	{
		for (j = i + 1; j < k; j++)
		{
			if (tmp[i] == tmp[j])
			{
				ArrDelete(&tmp[j], k - j);
				j--;//避免删除一个元素后的tmp[j]被跳过比较
				k--;
			}
		}
	}
	tmp[k] = '\0';
	printf("%s\n", tmp);

	system("pause");
	return 0;
}
