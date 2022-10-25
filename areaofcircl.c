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
