#include <stdio.h>

void swap(int *a, int *b)
{
    int c;
    c = *a;
    *a = *b;
    *b = c;
}
int main()
{
    int x = 20, y = 2;
    printf("x = %d, y = %d\n", x, y);

    swap(&x, &y);
    printf("x = %d, y = %d\n", x, y);

    return 0;
}