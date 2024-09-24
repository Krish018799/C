#include <stdio.h>

int main()
{
    int year;
    printf("Enter year:\n");
    scanf("%d", &year);

    if (year % 4)
    {
        printf("This is leap year\n");
    }
    else
    {
        printf("This isn't leap year\n");
    }

    return 0;
}