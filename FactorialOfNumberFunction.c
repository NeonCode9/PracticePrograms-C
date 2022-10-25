#include<stdio.h>
///Author: Sudhakar GopalRao. 
///This is a C program to find factorial numbers for multiple input number using functions in function/// 
int Facto(int num); // Declare sub function
int main()
{
    //Declare Function Variable
    int input1, input2; 
    //read data from user
    printf("Enter first number: ");
    scanf("%d", &input1);
    printf("Enter second number: ");
    scanf("%d", &input2);

    //Call the sub function & pint output///
    printf("Factorial for '%d': %d\n", input1, Facto(input1));
    printf("Factorial for '%d': %d\n", input2, Facto(input2));
    return (0);
}

/// This is an sub function to be called with in main function 
//Factorial Number Find Logic//
int Facto(int num)
{
   int i, fact = 1; 
    for (i = 1; i <= num; i++)
        fact = fact * i; 
        return fact;
}