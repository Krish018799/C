#include <stdio.h>
// area of triangle & circle
int main()
{
    int op, no1, no2;

    do
    {
        printf("Press 1 for Addition\n");
        printf("Press 2 for Subtractiion\n");
        printf("Press 3 for Multiplication\n");
        printf("Press 4 for Division\n");
        printf("Press 5 for Exit\n");

        printf("Enter Option:\n");
        scanf("%d", &op);

        if (op == 1)
        {
            printf("Enter no1:\n");
            scanf("%d", &no1);
            printf("Enter no2:\n");
            scanf("%d", &no2);

            printf("%d\n", no1 + no2);
        }
        else if (op == 2)
        {
            printf("Enter no1:\n");
            scanf("%d", no1);
            printf("Enter no2:\n");
            scanf("%d", no2);

            printf("%d\n", no1 - no2);
        }
        else if (op == 3)
        {
            printf("Enter no1:\n");
            scanf("%d", no1);
            printf("Enter no2:\n");
            scanf("%d", no2);

            printf("%d\n", no1 * no2);
        }
        else if (op == 4)
        {
            printf("Enter no1:\n");
            scanf("%d", no1);
            printf("Enter no2:\n");
            scanf("%d", no2);

            printf("%d\n", no1 / no2);
        }
        else if (op == 5)
        {
            printf("Bye\n");
        }
        else
        {
            printf("Wrong Option\n");
        }
    } while (op != 5);

    return 0;
}