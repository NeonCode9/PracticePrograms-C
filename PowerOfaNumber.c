//This is a C program to calculate the Power of a number
#include<stdio.h>
int main()  //initialize the main function

{
	//Initialize the variables
	 int p, q, i, output = 1;
	//Give option for user to input numerical value
	printf("Enter The Value for Base:");
	//Read the input
	scanf("%d",&p);
	printf("Enter The Value for Exponent:");
	//Read the input
	scanf("%d",&q);
	
	//Logic for Calculating Power of a number
	for (i = 1; i <= q; i++)
		output = output * p;
 		printf("%d power %d = %d\n", p, q, output);
 		return 0;
}
