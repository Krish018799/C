#include <stdio.h>

int main()
{
    int no;

    printf("Enter NO:\n");
    scanf("%d", &no);

    if (no > 5)
    {
        printf("Yes, no is >5\n");
    }
    else if (no < 5)
    {
        printf("Sorry, no is <5\n");
    }

    return 0;
}