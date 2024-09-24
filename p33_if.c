#include <stdio.h>

int main()
{
    int no1,no2;
    char op;
    printf("Press a for addition\n");
    printf("Press s for subtraction\n");
    printf("Press m for multiplication\n");
    printf("Press d for division\n");

    printf("Enter character:\n");
    scanf("%c", &op);

    if (op == 'a' || op == 'A')
    {
        printf("Enter number:\n");
        scanf("%d", &no1);
        printf("Enter number:\n");
        scanf("%d", &no2);
        
        printf("addition =%d\n", no1 + no2);
    }
    else if (op == 's' || op == 'S')
    {
        printf("Enter number:\n");
        scanf("%d", &no1);
        printf("Enter number:\n");
        scanf("%d", &no2);
        printf("Subtraction =%d\n", no1 - no2);
    }
    else if (op == 'm' || op == 'M')
    {
        printf("Enter number:\n");
        scanf("%d", &no1);
        printf("Enter number:\n");
        scanf("%d", &no2);
        printf("Multiplication =%d\n", no1 * no2);
    }
    else if (op == 'd' || op == 'D')
    {
        printf("Enter number:\n");
        scanf("%d", &no1);
        printf("Enter number:\n");
        scanf("%d", &no2);
        printf("Division =%d\n", no1 / no2);
    }

    return 0;
}