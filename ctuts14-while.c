#include <stdio.h>

int main()
{
    int i = 0;
    printf("enter a number\n");
    scanf("%d", &i);

    while(i<10)
    {
        printf("%d\n", i+1);
        i++;
    }
    return 0;
}
