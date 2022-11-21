#include <stdio.h>

void display(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d | ", array[i]);
    }
}

// void arrayrev(int array[], int size)
// {
//     for (int i = size - 1; i >= 0; i--)
//     {
//         printf("%d | ", array[i]);
//     }
// }

void arrayrev2(int array[], int size)
{
    int temp;
    for (int i = 0; i < size/2; i++)
    {
        //swap item arr[i] with arr[6-i]
        temp = array[i]; 
        array[i] = array[(size-1)-i];
        array[(size-1)-i] = temp;
    }
}

int main()
{
    int n;
    printf("Enter the size of the array you want: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the %d element of the array = ", i);
        scanf("%d", &arr[i]);
    }

    printf("The array you created is:\n");
    display(arr, n);
    printf("\n \nThe reversed array is:\n");
    arrayrev2(arr, n);
    display(arr, n);

    return 0;
}