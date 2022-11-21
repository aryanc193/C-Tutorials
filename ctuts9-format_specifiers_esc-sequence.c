#include <stdio.h>
/*
%c -> character
%d -> integer
%f -> float
%l -> long
%lf -> double
%Lf -> long double
const -> defines a variable as constant thus not allowing it to be changed in the future
        #define can also be used for this process
*/
#define PI 3.14
int main()
{
    int a = 8;
    const float b = 7.333;
    //b = 2.4; //cannot since b is already defines as a constant
    //PI = 8.44; //cannot since already preprocessed as 3.14
    printf("%f\n", PI);
    printf("The value of a is %d and the value of b is %f\n", a, b);
    printf("%5.3f\n", b); //%a.bf a is the character space taken and 
                        //b is the number of decimal places
    printf("tab char \t\t my backslash \\n 80085 \a for sound");
    return 0;
}
