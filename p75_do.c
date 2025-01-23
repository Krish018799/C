#include <stdio.h>

int main()
{
    int no1, no2;
    char op;

    do
    {

        printf("Press + for Addition\n");
        printf("Press - for Subtraction\n");
        printf("Press * for Multiplition\n");
        printf("Press / for Divition\n");
        printf("Press b for Exit\n");

        fflush(stdin);
        
        printf("Enter option:\n");
        scanf("%c", &op);

        if (op == '+')
        {
            printf("Enter no1:\n");
            scanf("%d", &no1);
            printf("Enter no2:\n");
            scanf("%d", &no2);

            printf("The addition of given numbers is %d\n", no1 + no2);
        }
        else if (op == '-')
        {
            printf("Enter no1:\n");
            scanf("%d", &no1);
            printf("Enter no2:\n");
            scanf("%d", &no2);

            printf("The addition of given numbers is %d\n", no1 - no2);
        }
        else if (op == '*')
        {
            printf("Enter no1:\n");
            scanf("%d", &no1);
            printf("Enter no2:\n");
            scanf("%d", &no2);

            printf("The addition of given numbers is %d\n", no1 * no2);
        }
        else if (op == '/')
        {
            printf("Enter no1:\n");
            scanf("%d", &no1);
            printf("Enter no2:\n");
            scanf("%d", &no2);

            printf("The addition of given numbers is %d\n", no1 / no2);
        }
        else if (op == 'a')
        {
            printf("Wrong option\n");
        }
        else if (op == 'b')
        {
            printf("Bye\n");
        }

    } while (op != 'b');

    return 0;
}