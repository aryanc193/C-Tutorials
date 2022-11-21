#include <stdio.h>

int main(int argc, const char *argv[]) 
{
    printf("%lu", sizeof(int));
    printf("\n-------------------\n");
    float a = 7.5599997969499;
    long double b = 8.9;
    printf("%.9f %Lf", a, b);
    return 0;
}