#include <stdio.h>
int main()
{
    //pointer arithmetic :
    char a = '3';
    char* ptra = &a;
    printf("%x\n", ptra); //address of character stored in a
    ptra--; 
    printf("%p\n", ptra); //address after decreasing 1 value from it
    printf("%d\n \n", ptra-2); //address after decreasing 2 values from it
    //can use %p or %x for pointer value or hexadecimal value respectively

    // pointer for arrays :
    int arr[] = {311,52,3,4,5,6,67};
    int* arrayptr = arr;
    printf("Value at position 3 of the array is %d\n", arr[3]);
    printf("The address of first element of the array is %d \n", &arr[0]);
    printf("The address of first element of the array is %d \n", arr);
    printf("The address of second element of the array is %d \n", &arr[1]); //or you can also use the pointer name in this case arrayptr
    printf("The address of second element of the array is %d \n", arr + 1);
    printf("The address of third element of the array is %d \n", &arr[2]);
    printf("The address of third element of the array is %d \n \n", arr + 2);
    // arr--; // this line will throw an error
    printf("The value at address of first element of the array is %d \n", *(&arr[0]));
    printf("The value at address of first element of the array is %d \n", arr[0]);
    printf("The value at address of first element of the array is %d \n", *(arr)); //or you can also use the pointer name with astrix in this case *arrayptr
    printf("The value at address of second element of the array is %d \n", *(&arr[1]));
    printf("The value at address of second element of the array is %d \n", arr[1]);
    printf("The value at address of second element of the array is %d \n", *(arr + 1));

    return 0;
}
