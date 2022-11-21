#include <stdio.h>

int b = 34; //global variable
int func1(int b1)
{
    static int myvar = 0; 
    printf("the vlaue of mvar is %d\n", myvar);
    myvar++;
    //printf("the value of b inside func1 is  %d\n", b);
    //printf("The address of b inside func1 is %d\n", &b);
    return b1 + myvar;
}

int main()
{
    int b  = 344;
    //printf("The address of b inside main is %d\n", &b);
    int val = func1(b);
    val = func1(b);
    val = func1(b);
    int *ptr = &val;
    //printf("The value of func is %d\n", val);
    return 0;
}