#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main7()
{
	int N, count = 0;
	char password[25] = { 0 }, tmp[1000] = { 0 };

	scanf("%s%d", password, &N);
	while (1)
	{
		getchar();
		scanf("%[^\n]", tmp);
		if (!strcmp(tmp, "#"))
		{
			break;
		}
		count++;
		if (!strcmp(tmp, password))
		{
			printf("Welcome in\n");
			break;
		}
		else
		{
			printf("Wrong password: %s\n", tmp);
		}
		if (count == N)
		{
			printf("Account locked\n");
			break;
		}
	}
	
	system("pause");
	return 0;
}

//ע��һ�����������У������пհ��ַ�����ʱӦ����������
//���������Ϊ N ʱ������� Account locked