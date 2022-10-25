#include<stdio.h>
#include<math.h>
void main()
{
	//Initialize the variables
	int num, cubeR;
	//Give option for user to input numerical value
	printf("Enter The Value for CubeR: ");
	//Read the input
	scanf("%d",&num);
	//Formula for cuberoot & print outpur
	printf("Cuberoot of" " '%d': "  , num);
	cubeR=num*num*num;
	printf("%d\n",cubeR);
}
