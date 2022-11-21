#include <stdio.h>

int sum (int a, int b);
void printstar(int n);
int takenumber();
void helloworld();

int main() 
{
    int a, b, c;
    // a = 9;
    // b = 87;
    // c = sum(a,b);
    // printf("%d", c);

    // printstar(7);

    // c = takenumber();
    // printf("The number entered is = %d", c);

    helloworld();

    return 0;
}

//with arg with return value
int sum (int a, int b)
{
    return a + b;
}

//with arg w/out return value
void printstar(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%c\n", '*');
    }
}

//w/out arg with return value
int takenumber()
{
    int i;
    printf("Enter a num: ");
    scanf("%d", &i);
    return i;
}

//w/out arg w/out return values
void helloworld()
{
    printf("Hello world");
}