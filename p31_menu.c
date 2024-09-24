#include <stdio.h>

int main()
{
    int quantity;
    char f;
    printf("Press p for Pizza\n");
    printf("Press d for Dosa\n");
    printf("Press s for Sandwitch\n");

    printf("Enter Food:\n");
    scanf("%c", &f);

    if (f == 'p')
    {
        printf("Puf pizza = 150Rs.\n");
        printf("Enter quantity:");
        scanf("%d", &quantity);
        printf("\nBill = %d", quantity * 150);
    }
    else if (f == 'd')
    {
        printf("Masala dosa = 80Rs.\n");
        printf("Enter quantity:");
        scanf("%d", &quantity);
        printf("\nBill = %d", quantity * 80);
    }
    else if (f == 's')
    {
        printf("Cheese sandwitch = 100Rs.\n");
        printf("Enter quantity:");
        scanf("%d", &quantity);
        printf("\nBill = %d", quantity * 100);
    }

    return 0;
}