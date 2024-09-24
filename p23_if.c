#include <stdio.h>

int main()
{
    int no1, no2;
    printf("Enter no1\n");
    scanf("%d", &no1);

    if (no1 % 2 == 0)
    {
        printf("no1 is even\n");
    }
    else if (no1 % 2 != 0)
    {
        printf("no1 is odd\n");
    }
     return 0;
}