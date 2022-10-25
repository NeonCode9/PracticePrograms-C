#include<stdio.h>
int main()
    { 
        float side, area;
        printf ("enter the value for side: ");
        scanf ("%f", &side);
        area = side*side;
        printf ("area=  ", "%f", area);
        return 0;

    }