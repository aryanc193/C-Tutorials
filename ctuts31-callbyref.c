#include <stdio.h>

// void changevalue(int* address)
// {
//     *address = 345;
// }

// int main()
// {
//     int a = 34, b = 56;
//     printf("The value of a now is %d\n", a);
//     changevalue(&a);
//     printf("The value of a now is %d\n", a);
//     return 0;
// }

//quick quiz
//given 2 nos a and b, add them sub them and assign them to a and b using call by ref

void changevalue2(int* a, int* b)
{
    int sum, sub;
    sum = *a + *b;
    sub = *a - *b;
    *a = sum;
    *b = sub; 
}

int main()
{
    int a = 3, b = 4;
    printf("the nos are %d and %d\n", a, b);
    changevalue2(&a, &b);
    printf("the new values of a and b are %d and %d\n", a, b);
    return 0;
}