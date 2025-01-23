#include <stdio.h>

int main()
{
    int no;

    printf("Enter no:\n");
    scanf("%d", &no);

    for (int i = 1; i <= no; i++)
    {
        if (i % 2 == 0)
        {
            printf("+ %d ", i);
        }
        else
        {
            printf("- %d ", i);
        }
    }
    return 0;
}