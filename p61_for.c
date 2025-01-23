#include <stdio.h>

int main()
{
    int no, i;

    printf("Enter no:\n");
    scanf("%d", &no);

    for (i = no; i >= 1; i--)
    {
        printf(" %d * ", i);
    }
    return 0;
}