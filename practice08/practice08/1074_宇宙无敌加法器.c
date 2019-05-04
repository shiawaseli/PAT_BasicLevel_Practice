#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void Reverse(char str[])
{
	int i, n;
	char tmp;

	n = strlen(str);
	for (i = 0; i < n / 2; i++)
	{
		tmp = str[i];
		str[i] = str[n - i - 1];
		str[n - i - 1] = tmp;
	}
}

int main4()
{
	int i, n, tmp, temp;
	char d[22] = { 0 }, num1[22] = { 0 }, num2[22] = { 0 }, ans[22] = { 0 };

	scanf("%s%s%s", d, num1, num2);
	n = strlen(d);
	Reverse(d);
	Reverse(num1);
	Reverse(num2);
	for (i = 0; i < n + 1; i++)
	{	
		tmp = num1[i] - '0' + num2[i] - '0' + ans[i] - '0';
		while (tmp < 0)
		{
			tmp += '0';
		}
		ans[i] = '0';
		temp = d[i] - '0';
		if (temp == 0)
		{
			temp = 10;
		}
		while (tmp >= temp)
		{
			ans[i + 1]++;
			tmp = tmp - temp;
		}
		if (tmp > 0)
		{
			ans[i] += tmp;
		}
		else if(tmp == 0 && ans[i + 1] == '\0' && num1[i + 1] == '\0' && num2[i + 1] == '\0')
		{
			ans[i] = '\0';
			break;
		}
	}
	Reverse(ans);
	printf("%s\n", ans);

	system("pause");
	return 0;
}

//题目有一组数结果为0，需考虑对应情况