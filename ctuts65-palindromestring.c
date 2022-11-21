#include <stdio.h>
#include <string.h>
#define size 100

void palstrfor(char str[size])
{
    int flag = 0, length;
    length = strlen(str);
    for (int i = 0; i < length; i++)
    {
        if (str[i] != str[length - i - 1])
        {
            flag = 1;
            break;
        }
    }

    if (flag == 1)
    {
        printf("%s is not a palindrome", str);
    }
    else
    {
        printf("%s is a palindrome", str);
    }
}

int main()
{
    char string[size];
    printf("Enter a string to check whether it is a palindrome or not \n");
    scanf("%s", &string);

    palstrfor(string);
    return 0;
}