#include <stdio.h>

int main()
{
    int no1, no2;

    printf("Enter no1:\n");
    scanf("%d", &no1);
    printf("Enter no2:\n");
    scanf("%d", &no2);

    if (no1 == no2)
    {
        printf("Yes, both are equal\n");
    }
    else
    {
        printf("Both are not equal\n");
    }

    return 0;
}