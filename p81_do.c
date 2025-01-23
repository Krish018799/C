#include <stdio.h>

int main()
{
    int no, s = 0, n;

    printf("Enter limit:\n");
    scanf("%d", &n);
    do
    {
        printf("Enter NO:\n");
        scanf("%d", &no);

        s = s + no;
    } while (no <= n);

    printf("\nThe total value is %d", s);

    return 0;
}