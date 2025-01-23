#include <stdio.h>

int main()
{
    int n = 9, s = 0;
    int a[100] = {11, 3, 20, 33, 21, 9, 8, 20, 2};

    for (int i = 0; i < n; i++)
    {
        printf("%d", a[i]);
        s = s + a[i];
    }
    printf("Sum = %d\n", s);

    return 0;
}