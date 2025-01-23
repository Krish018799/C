#include <stdio.h>

int main()
{
    int n, k;

    printf("Enter n:\n");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        k = n;
        for (int j = n; j >= i; j--)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", k);
            k--;
        }
        printf("\n");
    }

    return 0;
}