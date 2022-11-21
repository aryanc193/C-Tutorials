#include <stdio.h>
#include <stdlib.h>

int palindrome(int num)
{
    int num2 = 0, rev;
    while (num>0)
    {
        rev = num%10;
        num2 = (num2*10) + rev;
        num = num/10;
    }

    if (num2 == num)    
    return 1;
}

int main()
{
    int number;
    printf("Enter a number to check whether it is a palindrome or not \n");
    scanf("%d", &number);
    
    if (palindrome(number))
    {
        printf("This number is a palindrome\n");
    }
    else
    {
        printf("This number is not a palindrome\n");
    }

    return 0;
}
