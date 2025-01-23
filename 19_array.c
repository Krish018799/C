#include <stdio.h>

int main()
{
    int a[100] = {1, 33, 1, 32, 44, 5, 33, 78, 33, 9};
    int n = 10, k, c = 0;

    printf("Enter no:\n");
    scanf("%d", &k);

    for (int i = 0; i < n; i++)
    {
        if (k == a[i])
        {
            c++;
            printf("Pos = %d\n", i + 1);
        }
    }
    if (c == 0)
    {
        printf("Sorry the number is not found\n");
    }
    printf("The same values count is %d\n", c);

    return 0;
}