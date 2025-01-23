#include <stdio.h>

int main()
{
    int no;

    printf("Enter no:\n");
    scanf("%d", &no);

    for (int i = 0; i <= no; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d Even\n", i);
        }
    }
    return 0;
}