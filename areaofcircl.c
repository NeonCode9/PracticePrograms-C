//Author: Sudhakar Gopalrao
//This is a C program to find area of circle
#include<stdio.h>
int main()
{
	float radius,cir;
	printf("enter radius: ");
	scanf("%f", &radius);
	cir=(3.14*radius*radius);
	printf("circle area: %f\n", cir);
	return 0;
}
