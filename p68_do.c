#include <stdio.h>

int main()
{
    int i, no;

    printf("Enter no:\n");
    scanf("%d", &no);

    i = 1;

    do
    {
        printf("%d * %d = %d\n", no, i, i * no);
        i++;
    } while (i <= 10);
    
    return 0;
}