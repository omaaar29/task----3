#include <stdio.h>
#include <math.h>5
 
int main ()
{
    double length, width,Perimeter ;

    printf("Enter the width:\n");
    scanf("%lf", &width);
    printf("Enter the length:\n");
    scanf("%lf", &length);

    Perimeter = length * width;
    printf ("Perimeter = %ld",Perimeter);

    return 0;
}

