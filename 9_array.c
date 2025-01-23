#include <stdio.h>

int main()
{
    int a[10] = {1, 45, 3, 6, 5, 234, 25, 4, 67, 90};
    int b[100];
    int n = 10;

    for (int i = 0; i < n; i++)
    {
        b[i] = a[i];
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", b[i]);
    }

    return 0;
}