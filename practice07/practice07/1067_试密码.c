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

//注意一行密码输入中，可以有空白字符，此时应该输入整行
//当错误次数为 N 时立即输出 Account locked