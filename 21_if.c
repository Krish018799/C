#include <stdio.h>

int main()
{
    int no1, no2;

    printf("Enter no1:");
    scanf("%d", &no1);
    printf("Enter no2:");
    scanf("%d", &no2);

    if (no1 + no2 == 50)
    {
        printf("%d\n", no1 * no2);
    }
    else
    {
        printf("%d\n", no1 + no2);
    }

    return 0;
}