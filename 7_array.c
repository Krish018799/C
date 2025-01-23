#include <stdio.h>

int main()
{
    int a[100] = {11, 24, 354, 46, 57, 65};
    int n = 6, s2 = 0, c2 = 0, s1 = 0, c1 = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            printf("%d ", a[i]);
            s1 = s1 + a[i];
            c1++;
        }
        else
        {
            printf("%d ", a[i]);
            s2 = s2 + a[i];
            c2++;
        }
    }
    printf("For even Sum = %d & Count = %d\n", s1, c1);
    printf("For odd Sum = %d & Count = %d\n", s2, c2);

    return 0;
}