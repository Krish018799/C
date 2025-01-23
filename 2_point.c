#include <stdio.h>

int main()
{
    // Here * for value and & is for address
    int a = 5;
    int *b;
    b = &a;

    printf("a = %d, b = %d\n", a, b);

    printf("a = %d, &a = %d\n", a, &a);

    printf("b = %d , *b = %d, &b = %d\n", b, *b, &b);

    return 0;
}