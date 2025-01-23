#include <stdio.h>

int main()
{
    int no;

    printf("Enter no:\n");
    scanf("%d", &no);

    for (float i = 1; i <= no; i++)
    {
        printf(" %.2f + ", 1 / i);
    }
    return 0;
}