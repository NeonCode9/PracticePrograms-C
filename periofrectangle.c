#include<stdio.h>
int main() 
{
	float len, wid, peri;
	printf("enter len: ");
	scanf("%f", &len);
	printf("enter wid: ");
	scanf("%f", &wid);
	peri=2*(len+wid);
	printf("area = " "%.2f\n ", peri);
	return 0;
}
