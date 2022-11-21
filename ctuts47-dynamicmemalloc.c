#include <stdio.h>
#include <stdlib.h>

int main()
{
    // // use of malloc
    // int *ptr, n;
    // printf("Enter the size of the array: ", n);
    // scanf("%d", &n);
    // ptr = (int *)malloc(n * sizeof(int));

    // for (int i = 0; i < n; i++)
    // {
    //     printf("Enter the value no %d of this array: ", i);
    //     scanf("%d", &ptr[i]);
    // }
    
    // for (int i = 0; i < n; i++)
    // {
    //     printf("the value at %d of this array is: %d\n", i, ptr[i]);
    // }

    // use of calloc
    //initializes values with 0: increases inefficiancy in program
    int *ptr, n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    ptr = (int *)calloc(n, sizeof(int));

    for (int i = 0; i < n; i++)
    {
        printf("Enter the value no %d of this array: ", i);
        scanf("%d", &ptr[i]);
    }
    
    for (int i = 0; i < n; i++)
    {
        printf("the value at %d of this array is: %d\n", i, ptr[i]);
    }

    // use of realloc
    //edit older array to make a new array with needed memory
    printf("Enter the size of the new array you want to create: ");
    scanf("%d", &n);

    ptr = (int *)realloc(ptr, n*sizeof(int));

    for (int i = 0; i < n; i++)
    {
        printf("Enter the value no %d of this array: ", i);
        scanf("%d", &ptr[i]);
    }
    
    for (int i = 0; i < n; i++)
    {
        printf("the value at %d of this array is: %d\n", i, ptr[i]);
    }
    free(ptr); //frees all the memory allocated in runtime

    return 0;
}