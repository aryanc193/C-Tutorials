#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14

double eDistance(int x1, int y1, int x2, int y2)
{
    double sos, dist;
    sos = (double)(x2 - x1) * (x2 - x1) + (double)(y2 - y1) * (y2 - y1);
    dist = sqrt(sos);
    return dist;
}

double mDistance(int x1, int y1, int x2, int y2)
{
    int dist;
    dist = (fabs)(x2 - x1) + (fabs)(y2 - y1);
    return dist;
}

double areaOfCircle(int x1, int y1, int x2, int y2, double (*fptr)(int, int, int, int))
{
    double aoc = PI * fptr(x1, y1, x2, y2) * fptr(x1, y1, x2, y2);
    return aoc;
}

int main()
{
    int x1, y1, x2, y2;
    // take x1, y1 and x2, y2 from the user using scanf
    printf("Enter the first point:\n");
    scanf("%d, %d", &x1, &y1);
    printf("Enter the second point:\n");
    scanf("%d, %d", &x2, &y2);

    printf("The euclidean distance between the 2 points is %0.4lf\n", eDistance(x1, y1, x2, y2));
    printf("The manhattan distance between the 2 points is %0.4lf\n", mDistance(x1, y1, x2, y2));

    double (*ptr)(int, int, int, int);
    ptr = eDistance;
    printf("The area of the circle having radius as the euclidian distance between the 2 given points will be: %0.4lf\n", areaOfCircle(x1, y1, x2, y2, ptr));
    free(ptr);
    ptr = mDistance;
    printf("The area of the circle having radius as the manhattan distance between the 2 given points will be: %0.4lf\n", areaOfCircle(x1, y1, x2, y2, ptr));
    return 0;
}
