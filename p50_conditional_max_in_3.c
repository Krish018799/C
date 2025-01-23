#include <stdio.h>

int main()
{
    int a = 535545;
    int b = 54545344;
    int c = 53453253;
    a > b && a > c ? printf("a is Max\n") : printf("b is Max\n") ; b > a && b > c ? printf("b is Max\n") : printf("c is Max\n");
    return 0;
}