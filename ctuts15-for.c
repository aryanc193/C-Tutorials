#include <stdio.h>

int main()
{
    int i,j=0;
    for (i = 0; i<10; )
    {
        printf("%d %d\n",i,j);
        i++;j++;
    }
    return 0;
}
