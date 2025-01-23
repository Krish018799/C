#include <stdio.h>

int main()
{
    int no;

    printf("Enter no:\n");
    scanf("%d", &no);

    for (int i = 1; i <= no; i++)
    {
        printf("*");
    }

    return 0;
}