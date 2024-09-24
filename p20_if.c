#include <stdio.h>

int main()
{
    int number;
    printf("Enter the number\n");
    scanf("%d", &number);

    if (number < 0)
    {
        printf("The number is nagative\n");
    }
    else if (number > 0)
    {
        printf("The number is positive\n");
    }
    else
    {
        printf("The number is 0\n");
    }
    return 0;
}