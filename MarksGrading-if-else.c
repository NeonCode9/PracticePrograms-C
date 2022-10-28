///Author: Sudhakar GopalRao. 
///This is a C program to print marks grade based on the numbers
#include<stdio.h>
int main()
{
	int marks;
	printf("Enter the Marks: ");
	scanf("%d", &marks);
	if (marks <= 30)
	{
		printf("Grade is 'C'\n");
	}
	else if (marks > 30 && marks < 70)
	{
		printf("Grade is 'B'\n");
	}
	else if (marks > 70 && marks < 90)
	{
		printf("Grade is 'A'\n");
	}
	else if (marks >= 90 && marks <= 100)
	{
		printf("Grade is 'A+'\n");
	}
	else if (marks > 100)
	{
		printf("Invalid Input\n");
	}
	return 0;
}
