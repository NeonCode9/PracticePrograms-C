//Author: Sudhakar Gopalrao
//This is a C program to check the Prime Number using Function
#include<stdio.h>
int isprimeNumber(int num); // Function Declertion
int main()  //initialize the main function
{
	//Initialize the variables
	 int i, num;
	//Give option for user to input numerical value
	printf("Enter A Number: ");
	//Read the input
	scanf("%d",&num);
	
	//Main function logic
	if (isprimeNumber (num))
		printf("%d is Prime Number\n", num);
	else
		printf("%d is Not a Prime Number\n", num);
		
	return 0;
}

//Sub function
int isprimeNumber(int num)
{
		//Logic for Calculating Power of a number
		int i;
		for (i = 2; i <  num; i++)
		{
			if (num%i == 0)
				break;
		}

}