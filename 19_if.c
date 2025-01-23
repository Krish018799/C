#include <stdio.h>

int main()
{
    int b, s;

    printf("Buy = ");
    scanf("%d", &b);
    printf("Sell = ");
    scanf("%d", &s);

    if (b < s)
    {
        printf("The user has made a profit\n");
    }
    else
    {
        printf("The user has not made a profit\n");
    }

    return 0;
}