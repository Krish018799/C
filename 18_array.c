#include <stdio.h>

int main()
{
    int a[6] = {1, 42, 2, 6, 65, 89};
    int k = 0, n = 6;

    printf("Enter no:\n");
    scanf("%d", &k);

    if (k < n)
    {
        printf("%d\n", a[k - 1]);
    }
    else
    {
        printf("Sorry\n");
    }

    return 0;
}