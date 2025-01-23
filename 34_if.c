#include <stdio.h>

int main()
{
    int op, price;

    printf("Press 1 for battary-based toys\n");
    printf("Press 2 for key-based toys\n");
    printf("Press 3 for electrical charging-based toys\n");

    printf("Enter op: ");
    scanf("%d", &op);

    switch (op)
    {
    case 1:
        printf("Enter price: ");
        scanf("%d", &price);
        if (price > 1000)
        {
            printf("The bill is %.2f\n", price * 0.1);
        }
    case 2:
        printf("Enter price: ");
        if (price > 100)
        {
            printf("The bill is %.2f\n", price * 0.05);
        }
    case 3:
        printf("Enter price: ");
        scanf("%d", &price);
        if (price > 500)
        {
            printf("The bill is %.2f\n", price * 0.1);
        }
        break;

    default:
        break;
    }
    return 0;
}