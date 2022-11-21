#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    // You have to create a command line utility to add/subtract/divide/multiply two numbers
    // First command line argument of your c program must be the operation.
    // The next arguments being the two numbers. For example:
    // >>Command.c add 45 4
    // >>49
    char * op;
    int n1, n2;
    op = argv[1];
    n1 = atoi(argv[2]);
    n2 = atoi(argv[3]);

    if (strcmp(op, "add") == 0)
    {
        printf("%d + %d = ", n1, n2);
        printf("%d\n", n1 + n2);
    }

    else if (strcmp(op, "subtract") == 0)
    {
        printf("%d - %d = ", n1, n2);
        printf("%d\n", n1 - n2);
    }

    else if (strcmp(op, "multiply") == 0)
    {
        printf("%d * %d = ", n1, n2);
        printf("%d\n", n1 * n2);
    }

    else if (strcmp(op, "divide") == 0)
    {
        printf("%d / %d = ", n1, n2);
        printf("%d\n", n1 / n2);
    }

    return 0;
}
