#include <stdio.h>

int main()
{
    int i, no;

    printf("Enter no:\n");
    scanf("%d", &no);

    i = 1;

    do
    {
        printf("%d - %d\n", i, i * i);
        i++;
    } while (i <= no);

    return 0;
}