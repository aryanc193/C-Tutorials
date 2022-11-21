#include <stdio.h>

void printstr(char str[])
{
    int i = 0;
    while (str[i] != '\0')
    {
        printf("%c", str[i]);
        i++;
    }   
    printf("\n"); 
}

int main()
{
    //char str[] = {'b','a','t','m','a','n','\0'};
    //char str[] = "batman";
    char str[34];
    gets(str);
    printf("Using custom function printstr\n");
    printstr(str);
    printf("using printf %s\n", str);
    printf("using puts\n");
    puts(str);
    return 0;
}