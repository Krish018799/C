#include <stdio.h>

int main()
{
    int no,op;

    printf("Press 1 for Square\n");
    printf("Press 2 for Qube\n");
    printf("Enter Option:\n");
    scanf("%d", &op);

    switch (op)
    {
    case 1:
        printf("Enter no.:\n");
        scanf("%d", &no);
        printf("The value is %d\n", no * no);
        break;
    case 2:
        printf("Enter no.:\n");
        scanf("%d", &no);
        printf("The value is %d\n", no * no * no);
        break;
    default:
        printf("Wrong number\n");
        break;
    }
    return 0;
}