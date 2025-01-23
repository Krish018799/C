#include <stdio.h>

int main()
{
    int a[6] = {-1, 34, 546, 65, -67, 5};
    int k = 0, b[100], c[100], m = 0, n = 6;

    for (int i = 0; i < n; i++)
    {
        if (a[i] > 0)
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