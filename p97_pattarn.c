#include <stdio.h>

int main()
{
    int n;

    printf("Enter No:\n");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j >= i; j--)
        {
            printf("%d", i);
        }
        printf("\n");
    }

    return 0;
}