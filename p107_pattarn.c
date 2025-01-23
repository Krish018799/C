#include <stdio.h>

int main()
{
    int no, k;

    printf("Enter no:\n");
    scanf("%d", &no);

    k = no;
    for (int i = 1; i <= no; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf(" ");
        }
        for (int j = no; j >= i; j--)
        {
            printf("%d", k);
        }
        k--;
        printf("\n");
    }

    return 0;
}