#include <stdio.h>

int main()
{
    int a[5] = {4, 6, 3, 5, 6};
    int b[2] = {33, 56};
    int c[100];
    int n1 = 5, n2 = 2, k = 0;

    for (int i = 0; i < n1; i++)
    {
        c[k] = a[i];
        k++;
    }

    for (int i = 0; i < n2; i++)
    {
        c[k] = b[i];
        k++;
    }

    for (int i = 0; i < k; i++)
    {
        printf("%d ", c[i]);
    }

    return 0;
}