#include <stdio.h>

int main()
{
    int length, bredth;

    printf("Enter length:");
    scanf("%d", &length);
    printf("Enter bredth:");
    scanf("%d", &bredth);

    if (length == bredth)
    {
        printf("This is square\n");
    }
    else
    {
        printf("This is not square\n");
    }

    return 0;
}