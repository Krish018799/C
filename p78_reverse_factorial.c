#include <stdio.h>

int main()
{
    int no, i, s = 1;

    printf("Enter no:\n");
    scanf("%d", &no);

    for (i = no; i >= 1; i--)
    {
        printf(" %d * ", i);
        s = s * i;
    }
    printf("\nThe reverse factorial is %d", s);
    return 0;
}