#include <stdio.h>

int main()
{
    int no;

    printf("Enter no:\n");
    scanf("%d", &no);

    for (int i = 1; i <= no; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}