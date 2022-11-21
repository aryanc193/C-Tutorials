#include <stdio.h>

int fibrec(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }

    else
    {
        return fibrec(n - 1) + fibrec(n - 2);
    }
}

int fibiter(int n)
{
    int a = 0;
    int b = 1;

    for (int i = 0; i < n; i++)
    {
        b = a + b; //1 for iteration 1
        a = b - a; //1 for iteration 1
    }
    return a;
}

int main()
{
    int n;
    printf("Enter the index at which you want the fibonacci number:\n");
    scanf("%d", &n);
    printf("The value of fibonacci number at index %d using iterative method is %d\n", n, fibiter(n));
    printf("The value of fibonacci number at index %d using recursive method is %d\n", n, fibrec(n));
    
    return 0;
}