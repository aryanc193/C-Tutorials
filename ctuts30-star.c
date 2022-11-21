#include <stdio.h>

int main()
{
    int choice, max;
    printf("Enter\n0 for triangular star pattern\n1 for reversed triangular star pattern\n");
    scanf("%d",&choice);
    printf("Enter the number of rows:\n");
    scanf("%d",&max);
    switch (choice)
    {
    case 0:
        for (int i = 0; i < max; i++)
        {
            for (int j = 0; j <= i; j++)
            {
                printf("*");
            }
            printf("\n");
        }  
        break;
    
    case 1:
        for (int i = 0; i < max; i++)
        {
            for (int j = 0; j <= max-i-1; j++)
            {
                printf("*");
            }
            
            printf("\n");
        }
        break;
        
    default:
        break;
    }
    return 0;
}