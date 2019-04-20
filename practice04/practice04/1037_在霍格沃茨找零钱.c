#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

typedef struct MONEY
{
	int Galleon;
	int Sickle;
	int Knut;
	int all;
}Money;

Money InputMoney()
{
	Money money;

	scanf("%d.%d.%d", &money.Galleon, &money.Sickle, &money.Knut);
	money.all = money.Galleon * 29 * 17 + money.Sickle * 29 + money.Knut;

	return money;
}

Money SubMoney(Money mon1, Money mon2)
{
	Money tmp;

	tmp.all = mon2.all - mon1.all;
	tmp.Galleon = tmp.all / (29 * 17);
	tmp.Sickle = abs((tmp.all - tmp.Galleon * 29 * 17) / 29);
	tmp.Knut = abs(tmp.all % 29);

	return tmp;
}

void PrintMoney(Money money)
{
	printf("%d.%d.%d\n", money.Galleon, money.Sickle, money.Knut);
}

int main7()
{
	Money pay, price, ret;

	price = InputMoney();
	pay = InputMoney();
	ret = SubMoney(price, pay);
	PrintMoney(ret);
	
	system("pause");
	return 0;
}