#include <stdio.h>
/*
Print a multiplication table of a number entered by the user in pretty form
example : 
enter the no u want the multi table of:
6
output:
table of 6:
6 x 1 = 6
.
.
6 x 10 = 60
*/
int main()
{
    int a, b, c, i;
    printf("Enter the number you want the multiplication table of: \n");
    scanf("%d", &a);
    printf("Enter till where you want the table:\n");
    scanf("%d", &b);

    // i=1;
    // do
    // {
    //     c = a*i;
    //     printf("%d x %d = %d\n", a, i, c);
    //     i++;
    // } while (i<=10);
    

    // i=1;
    // while (i<=b)
    // {
    //     c = a*i;
    //     printf("%d x %d = %d\n", a, i, c);
    //     i++;  
    // }
    

    for (i = 1; i<=b; i++)
    {
        c = a*i;
        printf("%d x %d = %d\n", a, i, c);
        
    } 

    // printf("%d x 1 = %d\n", a, a*1);
    // printf("%d x 2 = %d\n", a, a*2);
    // printf("%d x 3 = %d\n", a, a*3);
    // printf("%d x 4 = %d\n", a, a*4);
    // printf("%d x 5 = %d\n", a, a*5);
    // printf("%d x 6 = %d\n", a, a*6);
    // printf("%d x 7 = %d\n", a, a*7);
    // printf("%d x 8 = %d\n", a, a*8);
    // printf("%d x 9 = %d\n", a, a*9);
    // printf("%d x 10 = %d\n", a, a*10);
    return 0;
}
