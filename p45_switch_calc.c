#include <stdio.h>

int main()
{
    int no1, no2;
    char ch;

    printf("Press a for addition\n");
    printf("Press s for subtraction\n");
    printf("Press m for multiplication\n");
    printf("Press d for division\n");

    printf("Enter Character:\n");
    scanf("%c", &ch);

    switch (ch)
    {
    case 'a':
    case 'A':
        printf("Enter no1:\n");
        scanf("%d", &no1);
        printf("Enter no2:\n");
        scanf("%d", &no2);
        printf("The value is %d\n", no1 + no2);
        break;
    case 's':
    case 'S':
        printf("Enter no1:\n");
        scanf("%d", &no1);
        printf("Enter no2:\n");
        scanf("%d", &no2);
        printf("The value is %d\n", no1 - no2);
        break;
    case 'm':
    case 'M':
        printf("Enter no1:\n");
        scanf("%d", &no1);
        printf("Enter no2:\n");
        scanf("%d", &no2);
        printf("The value is %d\n", no1 * no2);
        break;
    case 'd':
    case 'D':
        printf("Enter no1:\n");
        scanf("%d", &no1);
        printf("Enter no2:\n");
        scanf("%d", &no2);
        printf("The value is %d\n", no1 / no2);
        break;
    default:
        break;
    }
    return 0;
}