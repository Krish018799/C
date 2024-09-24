#include <stdio.h>

int main()
{
    int a, b, add, sub, mult, div;
    a = 20;
    b = 2;
    add = a + b;
    sub = a - b;
    mult = a * b;
    div = a / b;

    printf("The Addition of a & b is %d\n", add);
    printf("The Subttraction of a & b is %d\n", sub);
    printf("The Multiplication of a & b is %d\n", mult);
    printf("The Divison of a & b is %d\n", div);

    return 0;
}