#include <stdio.h>

int main()
{
    int op, height, base, r;

    do
    {
        printf("Press 1 for Area of Triangle\n");
        printf("Press 2 for Area of Circle\n");
        printf("Press 3 for Bye\n");

        printf("Enter op:\n");
        scanf("%d", &op);

        if (op == 1)
        {
            printf("Enter Height:\n");
            scanf("%d", &height);
            printf("Enter Base:\n");
            scanf("%d", &base);

            printf("The area of Triangle is %d\n", 0.5 * height * base);
        }
        else if (op == 2)
        {
            printf("Enter Radius:\n");
            scanf("%d", &r);

            printf("The area of Circle is %d\n", 3.14 * r * r);
        }
        else if (op == 3)
        {
            printf("Bye \n");
        }
        else
        {
            printf("Wrong Option\n");
        }
    } while (op != 3);

    return 0;
}