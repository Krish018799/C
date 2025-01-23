#include <stdio.h>

int main()
{
    int no, op, c = 0, s = 0;
    no = 0;
    printf("Press -1 for exit\n");

    do
    {
        printf("Enter no:\n");
        scanf("%d", &no);
        s = s + no;
        c++;
    } while (no != -1);

    printf("\nCount = %d Sum = %d", c, s + 1);

    return 0;
}