#include <stdio.h>
#include "ctuts54-danglingptr.c"
#define PI 3.14
#define SQUARE(x) x*x

int main()
{
    int var = 4;
    int *ptr = functionDangling();
    printf("This is var %d\n", var);
    printf("The value of PI is %f\n", PI);
    printf("The area of this circle is %f\n", PI * SQUARE(var));
    
    return 0;
}