#include<stdio.h>
///Author: Sudhakar GopalRao. 
///This is a C program to print reverse of input number/// 

int main()
{
    //Declare Variable
    int input, rev=0, rem, n; 
    //read input number from user
    printf("Enter number: ");
    scanf("%d", &input);

    //Reverse number logic & print output///
    n = input;
    while (n > 0)
    {
        rem = n % 10;
        n = n / 10;
        rev = rev * 10 + rem;
    }
    
    printf("Reverse of %d is %d", input, rev);
    return (0);
}