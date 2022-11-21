#include <stdio.h>

int main()
{
    int marks[2][4]; //= {{25, 35, 45, 67}, {1, 2, 3, 4}};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("enter the value of %d, %d element of the array\n", i, j);
            scanf("%d", &marks[i][j]);
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", marks[i][j]);
        }
        printf("\n");
    }

    // marks[0] = 34;
    // printf("Marks of student 1 is %d\n", marks[0]);
    // marks[0] = 4;
    // marks[1] = 24;
    // marks[2] = 34;
    // marks[3] = 54;
    // printf("Marks of student 1 is %d\n", marks[0]);
    return 0;
}
