#include <stdio.h>

int main()
{
    int a[33] = {32, 434, 122, 645, 5655, 6};
    int n = 6, s = 0, c = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] % 7 == 0)
        {
            printf("%d ", a[i]);
            s = s + a[i];
            c++;
        }
    }
    printf("\n");
    printf("Sum = %d\nCount = %d\n", s, c);

    return 0;
}