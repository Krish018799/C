#include <stdio.h>

int main()
{
    int a[8] = {24, 254, 65, 74, 8, 12, 98, 7};
    int b[100];
    int n = 8;

    for (int i = 0; i < n; i++)
    {
        b[i] = a[i] * a[i];
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", b[i]);
    }

    return 0;
}