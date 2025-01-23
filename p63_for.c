#include <stdio.h>

int main()
{
    int no, s1 = 0, s2 = 0;

    printf("Enter no:\n");
    scanf("%d", &no);

    for (int i = 1; i <= no; i++)
    {
        if (i % 2 == 0)
        {
            printf(" %d +", i * i);
            s1 = s1 + (i * i);
        }
        else
        {
            printf(" %d +", i * i * i);
            s2 = s2 + (i * i * i);
        }
    }
        printf("\nsum1 = %d & sum2 = %d", s1, s2);
    return 0;
}