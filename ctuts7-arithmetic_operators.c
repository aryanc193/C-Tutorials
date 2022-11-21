#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter number a = \n");
    scanf("%d", &a);

    printf("Enter number b = \n");
    scanf("%d", &b);

    printf("The sum is = %d\n", a+b);
    printf("The diff is = %d\n", a-b);
    printf("The prod is = %d\n", a*b);
    printf("The quotient is = %d\n", a/b);
    printf("The remainder is = %d\n", a%b);

    return 0;
}