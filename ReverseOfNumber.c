#include<stdio.h>
///Author: Sudhakar GopalRao. 
///This is a C program to print reverse of input number/// 

int main()
{
    //Declare Variable
    int input, i, rev=0, rem, n; 
    //read input number from user
    printf("Enter number: ");
    scanf("%d", &input);

    //Reverse number logic & print output///
    m = n;
    while (m > 0)
    {
        rem = m % 10;
        m = m / 10;
        rev = rev * 10 + rem;
    }
    
    printf("Reverse of %d is %d", n, rev);
    return (0);
}