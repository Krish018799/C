#include <stdio.h>

int main()
{
    int a = 20;
    int *b;
    b = &a;

    printf("a = %d *b = %d\n", a, *b);

    *b = 100;
    printf("a = %d *b = %d\n", a, *b);

    a = 77;
    printf("a = %d *b = %d\n", a, *b);

    *b = 50;
    printf("a = %d *b = %d\n", a, *b);

    return 0;
}