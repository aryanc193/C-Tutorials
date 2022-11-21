#include <stdio.h>
#include <stdlib.h>

int sum(int a, int b)
{
    return a + b;
}

void greet()
{
    printf("Hello world my user good morning\n");
}

int main()
{
    int a;
    printf("the sum of 1 and 2 is %d\n", sum(1, 2));
    int (*fptr) (int, int); // declaring a func pntr
    fptr = &sum; // creating a func pntr
    int d = (*fptr)(4, 6); // dereferencing a func pntr
    printf("the value of d is %d\n", d);

    return 0;
}