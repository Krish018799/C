#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter value a:\n");
    scanf("%d", &a);

    printf("Enter value b\n");
    scanf("%d", &b);

    if (a > b)
    {
        printf("a is greater\n");
    }
    else
    {
        printf("b is greater \n");
    }

    return 0;
}