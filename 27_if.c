#include <stdio.h>

int main()
{
    int year;

    printf("Enter Year:\n");
    scanf("%d", &year);

    if (year > 5)
    {
        printf("You have 5 percent bonus\n");
    }
    else
    {
        printf("You don't have bonus\n");
    }

    return 0;
}