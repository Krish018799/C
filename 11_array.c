#include <stdio.h>

int main()
{
    int a[8] = {7, 8, 6, 5, 46, 345, 687, 100};
    int b[100], n = 8, k = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            b[k] = a[i];
            k++;
        }
    }
    for (int i = 0; i < k; i++)
    {
        printf("%d ", b[i]);
    }

    return 0;
}