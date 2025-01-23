#include <stdio.h>

int main()
{
    int no;

    printf("Enter no:\n");
    scanf("%d", &no);

    for (int i = 1; i <= no; i++)
    {
        for (int j = no; j >= i; j--)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    
    for (int i = 1; i <= no; i++)
    {
        for (int j = 1; j <= no; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    

    return 0;
}