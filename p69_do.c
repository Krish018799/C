#include <stdio.h>

int main()
{
    int op, no1;

    do
    {
        printf("\nPress 1 for Square\n");
        printf("Press 2 for Cube\n");
        printf("press 4 for exit\n");
        printf("Enter op:\n");
        scanf("%d", &op);

        if (op == 1)
        {
            printf("Enter no1:\n");
            scanf("%d", &no1);
            printf("%d\n", no1 * no1);
        }
        else if (op == 2)
        {
            printf("Enter no1:\n");
            scanf("%d", &no1);
            printf("%d\n", no1 * no1 * no1);
        }
        else if (op == 4)
        {
            printf("\nBye");
        }
        else
        {
            printf("\nWrong opt");
        }

    } while (op != 4);

    return 0;
}