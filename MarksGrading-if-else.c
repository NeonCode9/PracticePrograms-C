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
		printf("Grade is 'C'");
	}
	else if (marks > 30 && marks < 70)
	{
		printf("Grade is 'B'");
	}
	else if (marks > 70 && marks < 90)
	{
		printf("Grade is 'A'");
	}
	else if (marks >= 90 && marks < 100)
	{
		printf("Grade is 'A+'");
	}
	return 0;
}
