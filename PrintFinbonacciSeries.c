#include<stdio.h>
///Author: Sudhakar GopalRao. 
///This is a C program to print Fibonacci Series for a input number/// 

int main()
{
    //Declare Variable
    int input, i, a=0, b=1, c; 
    //read input number from user
    printf("Enter number(n>2): ");
    scanf("%d", &input);

    //Fibonacci Number Generate Logic & print output///
    printf("Fibonacci Series: \n0 \n1 \n");
    for (i = 1; i <= input - 2; i++)
    {
        c = a + b;
        a = b; b = c;
        printf("%d  \n" , c);
    }    

    return (0);
}