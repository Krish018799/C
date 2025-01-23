#include <stdio.h>

int main()
{
    int no, s = 0, c = 0, n1;

    printf("Enter NO:\n");
    scanf("%d", &no);

    printf("Enter limit:\n");
    scanf("%d", &n1);

    for (int i = 1; i <= no; i++)
    {
        if (i % n1 == 0)
        {
            s = s + i;
            c++;
        }
    }

    printf("Sum = %d count = %d\n", s, c);

    return 0;
}