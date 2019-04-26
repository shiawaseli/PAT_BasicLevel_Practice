#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main1()
{
	double R1, P1, R2, P2, real, image;

	scanf("%lf%lf%lf%lf", &R1, &P1, &R2, &P2);
	real = R1 * cos(P1) * R2 * cos(P2) - R1 * sin(P1) * R2 * sin(P2);
	image = R1 * cos(P1) * R2 * sin(P2) + R2 * cos(P2) * R1 * sin(P1);
	if (fabs(real) < 0.01)
	{
		real = 0;
	}
	if (fabs(image) < 0.01)
	{
		image = 0;
	}
	if (image < 0)
	{
		printf("%.2f%.2fi\n", real, image);
	}
	else
	{
		printf("%.2f+%.2fi\n", real, image);
	}
	
	system("pause");
	return 0;
}