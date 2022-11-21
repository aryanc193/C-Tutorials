#include <stdio.h>

int main()
{
    int m1, m2, n1, n2, sum = 0;
    // First Matrix:
    printf("For First matrix:\n");
    printf("Enter the number of rows: ");
    scanf("%d", &m1);
    printf("Enter the number of coloumns: ");
    scanf("%d", &n1);
    int M1[m1][n1];
    for (int i = 0; i < m1; i++)
    {
        for (int j = 0; j < n1; j++)
        {
            printf("Enter the element at %d, %d: ", i, j);
            scanf("%d", &M1[i][j]);
        }
    }

    // Second Matrix:
    printf("\nFor second matrix:\n");
    printf("Enter the number of rows: ");
    scanf("%d", &m2);
    printf("Enter the number of coloumns: ");
    scanf("%d", &n2);
    int M2[m2][n2];
    for (int i = 0; i < m2; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            printf("Enter the element at %d, %d: ", i, j);
            scanf("%d", &M2[i][j]);
        }
    }

    printf("\nThe first matrix is:\n");
    for (int i = 0; i < m1; i++)
    {
        printf("\n");
        for (int j = 0; j < n1; j++)
        {
            printf("%d\t", M1[i][j]);
        }
    }

    printf("\n\nThe Second matrix is:\n");
    for (int i = 0; i < m2; i++)
    {
        printf("\n");
        for (int j = 0; j < n2; j++)
        {
            printf("%d\t", M2[i][j]);
        }
    }

    // Multiplying them
    int res[m1][n2];
    if (n1 == m2 || m2 == n1)
    {
        for (int i = 0; i < m1; i++)
        {
            for (int j = 0; j < n2; j++)
            {
                for (int k = 0; k < m2; k++)
                {
                    sum += M1[i][k] * M2[k][j];
                }
                res[i][j] = sum;
                sum = 0;
            }
        }
    }
    else
    {
        printf("\nThese matrices cannot be multiplied\n");
    }

    printf("\n\nThe product of the 2 matrices is:\n\n");
    for (int i = 0; i < m1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            printf("%d\t", res[i][j]);
        }
        printf("\n");
    }
    return 0;
}