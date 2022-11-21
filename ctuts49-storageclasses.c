#include <stdio.h>
// #include "ctuts49-temp.c"

// int sum = 897;
int myfunc(int a, int b)
{
    // auto int sum;
    static int sum;
    sum++;
    // sum = a + b;
    printf("The sum is %d\n", sum);
    return sum;
}

// int sum=34;

int main()
{
    // Declaration - Telling the compiler about the variable (no space reservation)
    // Definition - Declaration + space reservation
    register int sum = myfunc(3, 5);
    sum = myfunc(3, 5);
    sum = myfunc(3, 5);
    sum = myfunc(3, 5);
    
    return 0;
}