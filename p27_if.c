#include <stdio.h>

int main()
{
    int no1;
    printf("Enter the number:\n");
    scanf("%d", &no1);

    if (no1 % 1 == 0 && no1 % 2 == 0)
    {
        printf("Your number is divisible\n");
    }
    else
    {
        printf("Your number is not divisible\n");
    }

    return 0;
}