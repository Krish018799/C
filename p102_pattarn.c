#include <stdio.h>

int main()
{
    int n, k;

    printf("Enetr n:\n");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        k = 1;
        for (int j = n; j >= i; j--)
        {
            printf("%d", k);
            k++;
        }
        printf("\n");
    }

    return 0;
}