#include <stdio.h>

int main()
{
    int no, quantity, quantity1, quantity2, b1, b2, b;

    do
    {
        printf("Press 1 for Xerox\n");
        printf("Press 2 for Typing\n");
        printf("Press 3 for Total Bill\n");

        printf("Enter character:\n");
        scanf("%d", &no);

        if (no == 1)
        {
            printf("Enter Pages:\n");
            scanf("%d", &quantity1);
            if (quantity1 > 50)
            {
                b1 = quantity1 * 7;
                printf("Your Bill is %dRs\n", b1);
            }
            else
            {
                b1 = quantity1 * 5;
                printf("Your Bill is %dRs\n", b1);
            }
        }   
        else if (no == 2)
        {
            printf("Enter Pages:\n");
            scanf("%d", &quantity);
            if (quantity > 50)
            {
                b2 = quantity * 20;
                printf("Your Bill is %dRs\n", b2);
            }   
            else    
            {   
                b2 = quantity * 15;
                printf("Your Bill is %dRs\n", b2);
            }   
        }
        else if (no = 3)
        {
            b = b1 + b2;
            printf("Your total bill is %d\n", b);
        }   
    }while(no != 3);

    return 0;
}   