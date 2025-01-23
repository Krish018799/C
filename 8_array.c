#include <stdio.h>

int main()
{
    int a[100] = {-1, -123, 23, 456, -4};
    int n = 5, s1 = 0, c1 = 0, s2 = 0, c2 = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] > 0)
        {
            printf("%d possitive", a[i]);
            s1 += a[i];
            c1++;
        }
        else
        {
            printf("%d negetive", a[i]);
            s2 += a[i];
            c2++;
        }
    }
    printf("\nfor possitive sum = %d & count = %d\n", s1, c1);
    printf("for nagetive sum = %d & count = %d\n", s2, c2);

    return 0;
}