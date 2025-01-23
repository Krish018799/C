#include <stdio.h>

int main()
{
    int a = 5;
    int b;

    b = a;

    printf("a = %d, b = %d\n", a, b);

    b = 100;  // Here there is no change in values second time 
    printf("a = %d, b = %d\n", a, b);

    a = 77;
    printf("a = %d, b = %d\n", a, b);

    return 0;
}