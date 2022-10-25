//This is a C program to calculate the cuberoot of a number
//we first add the preprocessor directive for standard input & output & also the math processor
#include<stdio.h>
#include<math.h>
//initialize the main function
int main()
{
	//Initialize the variables
	float num, cubeR;
	//Give option for user to input numerical value
	printf("Enter The Value for CubeRoot: ");
	//Read the input
	scanf("%f",&num);
	//Formula for cuberoot & print output
	printf("Cuberoot of" " %.2f: "  , num);
	cubeR=num*num*num;
	printf("%.2f\n",cubeR);

	return 0;
}
