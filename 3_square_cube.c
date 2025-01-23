#include <stdio.h>

void sqare()
{
    int a;
    printf("Enter no: ");
    scanf("%d", &a);

    printf("Square = %d\n", a * a);
}

void cube()
{
    int a;
    printf("Enter no: ");
    scanf("%d", &a);

    printf("Cube = %d\n", a * a * a);
}

int main()
{
    sqare();
    cube();
    return 0;
}