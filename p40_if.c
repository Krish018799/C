#include <stdio.h>

int main()
{
    int no;

    printf("Enter Day no.:\n");
    scanf("%d", &no);

    if (no == 1)
    {
        printf("Monday\n");
    }
    else if (no == 2)
    {
        printf("Tuesday\n");
    }
    else if (no == 3)
    {
        printf("Wednesday\n");
    }
    else if (no == 4)
    {
        printf("Thursday\n");
    }
    else if (no == 5)
    {
        printf("Friday\n");
    }
    else if (no == 6)
    {
        printf("Saterday\n");
    }
    else if (no == 7)
    {
        printf("Sunday\n");
    }
    return 0;
}