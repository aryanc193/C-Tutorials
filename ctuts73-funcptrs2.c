#include <stdio.h>
#include <stdlib.h>

int sum(int a, int b)
{
    return a + b;
}

float avg(int a, int b)
{
    return (float)(a + b) / 2;
}

void greetHelloAndExecute(int (*fptr)(int, int))
{
    printf("Hello world my user\n");
    printf("the sum of 5 and 7 is %d\n", fptr(5, 7));
}

void greetGmAndExecute(int (*fptr)(int, int))
{
    printf("good morning\n");
    printf("the sum of 5 and 7 is %d\n", fptr(5, 7));
}

void greetGaAndExecute(float (*fptr2)(int, int))
{
    printf("good afternoon\n");
    printf("the average of 6 and 7 is %.2f\n", fptr2(6, 7));
}

void greetGeAndExecute(float (*fptr2)(int, int))
{
    printf("good evening\n");
    printf("the average of 6 and 7 is %.2f\n", fptr2(6, 7));
}

int main()
{
    int (*ptr)(int, int); // declaring a func pntr
    ptr = sum;            // creating a func pntr
    greetHelloAndExecute(ptr);
    greetGmAndExecute(ptr);
    float (*ptr2)(int, int);
    ptr2 = avg;
    greetGaAndExecute(ptr2);
    greetGeAndExecute(ptr2);
    return 0;
}