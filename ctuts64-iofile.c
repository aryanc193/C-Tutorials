#include <stdio.h>

int main()
{
    FILE *ptr = NULL;
    char string[55] = "This content was produced by ctuts64";
    // // Reading a file
    // ptr = fopen("myfile.txt", "r");
    // fscanf(ptr, "%s", string);
    // printf("The content of this file has %s\n", string);

    // // Writing in a file
    ptr = fopen("myfile.txt", "a");
    // fprintf(ptr, "%s", string);
    fprintf(ptr, "\n%s", string);
    return 0;
}