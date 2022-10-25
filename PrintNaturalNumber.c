#include<stdio.h>
///Author: Sudhakar GopalRao. 
///This is a C program to print natural numbers list for a input number/// 

int main()
{
    //Declare Variable
    int input, i; 
    //read data from user
    printf("Enter number: ");
    scanf("%d", &input);

    //Natural Number Generate Logic & print output///
    printf("Here is the list of Natural Numbers:\n");
    for (i = 1; i <= input; i++)
        printf("%d\n", i);

    return (0);
}