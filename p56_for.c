#include <stdio.h>

int main()
{
    int no;

    printf("Enter no:\n");
    scanf("%d", &no);

    for (int i = 1; i <= no; i++)
    {
        printf("%d\n", i);
    }
    return 0;
}