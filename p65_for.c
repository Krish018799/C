#include <stdio.h>

int main()
{
    int no, i, s = 0;

    printf("Enter no:\n");
    scanf("%d", &no);

    for (i = 1; i <= no; i++)
    {
        printf(" %d + ", i * i * i);
        s = s + (i * i * i);
    }
    printf("\nSum = %d", s);
    return 0;
}