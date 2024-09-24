#include <stdio.h>

int main()
{
    int no1, no2, no;
    char ch;
    printf("Press m for max between two\n");
    printf("Press o for odd even\n");

    printf("Enter character:\n");
    scanf("%c", &ch);

    if (ch == 'm')
    {
        printf("Enter no1:\n");
        scanf("%d", &no1);
        printf("Enter no2:\n");
        scanf("%d", &no2);
        if (no1 > no2)
        {
            printf("no1 is Greater\n");
        }
        else if (no2 > no1)
        {
            printf("no2 is Greater\n");
        }
    }
    else if (ch == 'o')
    {
        printf("Enter no:\n");
        scanf("%d", &no);
        if (no % 2 == 0)
        {
            printf("no is Even\n");
        }
        else
        {
            printf("no is Odd\n");
        }
    }

    return 0;
}