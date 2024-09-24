#include <stdio.h>

int main()
{
    int quantity, quantity1, quantity2, b1, b2;
    b1 = 0;
    b2 = 0;
    char ch;
    printf("Press x for Xerox\n");
    printf("Press t for Typing\n");
    printf("Press b for Both\n");

    printf("Enter character:\n");
    scanf("%c", &ch);

    if (ch == 'x')
    {
        printf("Enter Pages:\n");
        scanf("%d", &quantity);
        if (quantity > 50)
        {
            printf("Your Bill is %dRs\n", quantity * 7);
        }
        else
        {
            printf("Your Bill is %dRs\n", quantity * 5);
        }
    }
    else if (ch == 't')
    {
        printf("Enter Pages:\n");
        scanf("%d", &quantity);
        if (quantity > 50)
        {
            printf("Your Bill is %dRs\n", quantity * 20);
        }
        else
        {
            printf("Your Bill is %dRs\n", quantity * 15);
        }
    }
    else if (ch == 'b')
    {
        printf("Enter Pages:\n");
        scanf("%d", &quantity1);
        printf("Enter Pages:\n");
        scanf("%d", &quantity2);
        if (quantity1 > 50)
        {
            b1 = quantity1 * 7;
            printf("Your Bill for xerox is %dRs\n", b1);
        }
        else
        {
            b1 = quantity1 * 5;
            printf("Your Bill for xerox is %dRs\n", b1);
        }
        if (quantity2 > 50)
        {
            b2 = quantity2 * 20;
            printf("Your Bill typing is %dRs\n", b2);
        }
        else
        {
            b2 = quantity2 * 15;
            printf("Your Bill for xerox is %dRs\n", b2);
        }
        printf("Total bill is %d\n", b1 + b2);
    }
    return 0;
}