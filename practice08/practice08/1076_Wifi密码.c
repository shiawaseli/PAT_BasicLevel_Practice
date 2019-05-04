#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int N, i, ans = 0;
	char ch[5];

	scanf("%d", &N);
	for (i = 0; i < N; )
	{
		scanf("%s", ch);
		if (ch[2] == 'T')
		{
			printf("%d", ch[0] - 'A' + 1);
			i++;
		}
	}
	putchar('\n');

	system("pause");
	return 0;
}

//测试点2 注意选择题可能有10个以上，所以不能用 int 类型存下密码再输出