#include <stdio.h>

int main()
{
    int no;

    printf("Enter no:\n");
    scanf("%d", &no);

    if (no == 5)
    {
        printf("Yes, no is 5\n");
    }
    else if (no != 5)
    {
        printf("Soory, no is not 5\n");
    }

    return 0;
}