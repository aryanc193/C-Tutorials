#include <stdio.h>

int main()
{
    // label:
    //     printf("we are inside label\n");
    //     goto end;
    // printf("Hello World\n");
    // goto label;
    // end:
    //     printf("We are at end!\n");
    int num;
    for (int i = 0; i < 8; i++)
    {
        printf("%d\n", i);
        for (int j = 0; j < 8; j++)
        {
            printf("Enter the number, 0 to exit: \n");
            scanf("%d", &num);
            if (num==0)     
            {
                goto end;
            }   
        }   
    }
    end:
    return 0;
}
