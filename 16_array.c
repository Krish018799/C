#include <stdio.h>

int main()
{
    int a[4] = {1, 43, 546, 5};
    int m = a[0], n = 4, pos = 0;

    for (int i = 0; i < n; i++)
    {
        if (m < a[i])
        {
            m = a[i];
            pos = i;
        }
    }
    printf("value = %d position = %d\n", m, pos);

    return 0;
}