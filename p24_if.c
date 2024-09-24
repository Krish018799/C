#include <stdio.h>

int main()
{
    int ss, eng, math, total;
    printf("Enter marks:\n");
    scanf("%d", &ss);

    printf("Enter marks:\n");
    scanf("%d", &eng);

    printf("Enter marks:\n");
    scanf("%d", &math);

    total = ss + eng + math;

    if (total <= 50)
    {
        printf("Your grade is C \n");
    }
    else if (total > 50 && total <= 100)
    {
        printf("Your grade is B \n");
    }
    else if (total > 100)
    {
        printf("Your grade is A \n");
    }

    return 0;
}