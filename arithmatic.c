//Author: Sudhakar Gopalrao
//This is a C program to do lot of arithmatic functions
#include<stdio.h>
int main() 
{
	// float a = 80;
	// float b = 10;
	// int c = b + 1; 
	// int d = c * a;
	
	
	// float e = d / 7.9;
	// float f = e - 20;
	// float g = a / 100 * b;
	// int h = 0.2 >= 4;
	// int k = 4 >= 0.2;
	// //int l = 4 == 3;
	// float p = 4.1 + 9.2 * 10;

	// int x = 5+2 / 2*3;
	// //int h = 0.2 <= 4;
	// int m = 3 != 2;
	// //int l = 5>3 && 4>>2;
	// int l = 3<2 || 4 > 2;
	// printf("Result = %d \n", l);

	int num;
	printf("Enter the number to test:  ");
	scanf("%d", &num);

	if ((num != 0) && ((num &(num - 1)) == 0))
	{
		printf("\n%d is a power of 2\n", num);
	}
	else
		printf("\n%d is not a power of 2\n", num);

	return 0;
}
