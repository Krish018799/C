#include <stdio.h>

int main()
{
    int n, k;

    printf("Enter n:\n");
    scanf("%d", &n);

    k = n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j >= i; j--)
        {
            printf("%d ", k);
        }
        k--;
        printf("\n");
    }

    return 0;
}