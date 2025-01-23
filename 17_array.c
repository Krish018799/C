#include <stdio.h>

int main()
{
    int a[4] = {1, 43, 546, 5};
    int m = a[0], k = a[3], n = 4, pos1 = 0, pos2 = 0;

    for (int i = 0; i < n; i++)
    {
        if (m < a[i])
        {
            m = a[i];
            pos1 = i;
        }
        if (k > a[i])
        {
            k = a[i];
            pos2 = i;
        }
    }
    
    printf("Max value = %d position = %d\n", m, pos1);
    printf("Min value = %d position = %d\n", k, pos2);

    return 0;
}