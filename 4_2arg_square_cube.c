#include <stdio.h>

void sqare(int a)
{
    printf("Square = %d\n", a * a);
}

void cube(int a)
{
    printf("Cube = %d\n", a * a * a);
}

int main()
{
    int a;
    printf("Enter no: ");
    scanf("%d", &a);

    sqare(a);
    cube(a);
    return 0;
}