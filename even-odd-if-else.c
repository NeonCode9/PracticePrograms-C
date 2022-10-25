#include <stdio.h>
#include <math.h>

int main()
{
    int a, x;
    printf ("Enter the number: ");
    scanf ("%d", &a);
    //a = (number / 2);
    //if 
    x = ("%d\n", a % 2 == 0);
    if (x == 1) 
        {printf ("Number is 'even'\n");}
    else 
        {printf ("Number is 'odd'\n");}
    return 0;
}