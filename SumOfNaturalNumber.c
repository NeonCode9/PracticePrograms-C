#include<stdio.h>
///Author: Sudhakar GopalRao. 
///This is a C program to add natural numbers for a input number/// 

int main()
{
    //Declare Variable
    int input, i, sum = 0; 
    //read data from user
    printf("Enter number: ");
    scanf("%d", &input);

    //Natural Number Logic & print output///
    for (i = 1; i <= input; i++)
        sum = sum + i;
         printf("Sum of Natural Number '%d': %d\n", input, sum);

    return (0);
}