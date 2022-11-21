// Predefined Macros & Other Pre-processor Directives
#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("the file name is: %s\n", __FILE__);
    printf("today's date is: %s\n", __DATE__);
    printf("The time is: %s\n", __TIME__);
    printf("The line no is: %d\n", __LINE__);
    printf("ANSI: %d\n", __STDC__);
    return 0;
}