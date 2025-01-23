#include <stdio.h>

int main()
{
    int a[6] = {11, 5, 7, 20, 65, 40};
    int b[100], c[100], k = 0, m = 0, n = 6;

    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            b[k] = a[i];
            k++;
        }
        else
        {
            c[m] = a[i];
            m++;
        }
    }
    for (int i = 0; i < k; i++)
    {
        printf("%d ", b[i]);
    }
    printf("\n");
    for (int i = 0; i < m; i++)
    {
        printf("%d ", c[i]);
    }

    return 0;
}