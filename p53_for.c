#include <stdio.h>

int main()
{
    int no;

    printf("Enter no:\n");
    scanf("%d", &no);

    for (int i = 1; i <= no; i++)
    {
        printf("%d %d %d\n", i, i * i, i * i * i);
    }
    return 0;
}