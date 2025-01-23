#include <stdio.h>

int main()
{
    int price;

    printf("Enter marked price:");
    scanf("%d", &price);

    if (price > 10000)
    {
        printf("The net amount is %.2fRs.\n", price * 0.2);
    }
    else if (price > 7000 && price <= 10000)
    {
        printf("The net amount is %.2fRs.\n", price * 0.15);
    }
    else if (price >= 7000)
    {
        printf("The net amount is %.2fRs.\n", price * 0.10);
    }

    return 0;
}