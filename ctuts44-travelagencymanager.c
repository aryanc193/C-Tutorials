#include <stdio.h>
#include <string.h>
/*
You manage a travel agency and you want your n drivers to input their following details:
1. Name
2. Driving License No
3. Route
4. Kms
Your program should be able to take n as input(or you can take n=3 for simplicity) and your drivers will start inputting their details one by one.

Your program should print details of the drivers in a beautiful fashion.
User structures.
*/

struct drivers
{
    char name[50];
    char dln[17];
    char route[100];
    int km;
}data[2];

int main()
{
    int i, n;
    printf("Enter Number Of drivers: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter details of driver %d\n", i+1);
        printf("Enter the name of the driver: ");
        scanf("%s", &data[i].name);

        printf("Enter the Licence number of the driver: ");
        scanf("%s", &data[i].dln);

        printf("Enter the Route of the driver: ");
        scanf("%s", &data[i].route);

        printf("Enter the km covered by the driver: ");
        scanf("%d", &data[i].km);
        printf("\n");
    }
    printf("\n**********Driver details are**********\n");
    for (i = 0; i < n; i++)
    {

        printf("Driver %d details are: \n", i + 1);

        printf("Name: %s\n", data[i].name);
        printf("Licence No: %s\n", data[i].dln);
        printf("Route Assigned: %s\n", data[i].route);
        printf("Distanace covered by driver %d is: %d\n", i + 1, data[i].km);
        printf("\n");
    }

    return 0;
}