#include <stdio.h>

int main()
{
    int op, quantity1, quantity2, quantity3, b1, b2, b3, b;

    do
    {
        printf("Pres 1 for Pizza\n");
        printf("Pres 2 for Dosa\n");
        printf("Pres 3 for Sandwich\n");
        printf("Pres 4 for Grand Total\n");

        printf("Enter Option:\n");
        scanf("%d", &op);

        if (op == 1)
        {
            printf("Puf pizza 200Rs.\n");
            printf("Enter quantity1:\n");
            scanf("%d", &quantity1);
            b1 = quantity1 * 200;
            printf("Your bill is %d\n", b1);
        }
        else if (op == 2)
        {
            printf("Butter dosa 100Rs.\n");
            printf("Enter quantity2:\n");
            scanf("%d", &quantity2);
            b2 = quantity2 * 100;
            printf("Your bill is %d\n", b2);
        }
        else if (op == 3)
        {
            printf("vegetable sandwich 120Rs.\n");
            printf("Enter quantity3:\n");
            scanf("%d", &quantity3);
            b3 = quantity3 * 120;
            printf("Your bill is %d\n", b3);
        }
        else if (op == 4)
        {
            b = b1 + b2 + b3;
            printf("Your total bill is %d\n", b);
        }
        else
        {
            printf("Wrong option\n");
        }
    } while (op != 4);

    return 0;
}