#include<stdio.h>
///Author: Sudhakar GopalRao. 
///This is a C program to print the multiplication table for input number/// 

int main()
{
    //Declare Variable
    int input, i; 

    //read data from user
    printf("Enter number for multiplication table: ");
    scanf("%d", &input);

    //Multiplication Logic & print output///
    for (i = 1; 
         i <= 10;
         i++)
         printf("%d*%d=%d\n", input, i, input*i);

    return (0);
}