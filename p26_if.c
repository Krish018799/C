#include <stdio.h>

int main()
{
    int no;
    printf("Enter the number:\n");
    scanf("%d", &no);

    if (no % 7 == 0)
    {
        printf("Number is divisible by 7\n");
    }
    else
    {
        printf("Number isn't divisibele by 7\n");
    }

    return 0;
}