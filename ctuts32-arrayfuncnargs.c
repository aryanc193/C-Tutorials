#include <stdio.h>
int m, n;
int display(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d | ", array[i]);
    }
    return 0;
    //array[0] = 382; //this will change the value and reflect it in main also
}

int ptrdisplay(int* ptr, int size)
{
    *(ptr + 2) = 38256; //this will change the value and reflect it in main also
    for (int i = 0; i < size; i++)
    {
        printf("%d | ", *(ptr +  i));
    }
    return 0;
}

int display2d(int array[m][n])
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("The value at %d, %d is %d\n", i, j, array[i][j]);
        }
    }
    return 0;
}

int main()
{
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    for (int i = 0; i < size; i++)
    {
        printf("Enter element %d of the array: ", i);
        scanf("%d", &arr[i]);
    }

    printf("\n array displayed by calling function\n");
    display(arr, size);
    printf("\n array through pointer function\n");
    ptrdisplay(arr, size);

    printf("\n***********2D array***********\n");
    printf("\nEnter number of rows and coloumns: \n");
    scanf("%d \n %d", &m, &n);
    int arr2[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("enter the value at %d, %d: ", i, j);
            scanf("%d", &arr2[i][j]);
        }
    }

    display2d(arr2);
    return 0;
}