#include <stdio.h>

int main()
{
    int a, b, calci;
    
    do
    {
        printf("\n****************************************************************************************************\n");
        printf("Enter first num = \n");
        scanf("%d", &a);
        printf("Enter second num = \n");
        scanf("%d", &b);
        printf("Enter the operation you would like to perform:\n1 for add\n2 for subtract\n3 for product\n4 for quotient\n5 for remainder\n6 to choose again\n7 to exit\n");
        scanf("%d", &calci);

        switch (calci)
        {
        case 1:
            printf("The sum is = %d\n", a + b);
            break;
        case 2:
            printf("The difference is = %d\n", a - b);
            break;
        case 3:
            printf("The product is = %d\n", a * b);
            break;
        case 4:
            printf("The quotient is = %f\n", (float)a / (float)b);
            break;
        case 5:
            printf("The remainder is = %d\n", a % b);
            break;
        default:
            break;
        }
    } while (calci != 7);
    
    return 0;
}