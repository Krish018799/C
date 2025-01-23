#include <stdio.h>

int main()
{
    int no, s = 0, c = 0, n1;

    printf("Enter NO:\n");
    scanf("%d", &no);

    for (int i = 1; i <= no; i++)
    {
        if (i % 7 == 0)
        {
            s = s + i;
            c++;
        }
    }

    printf("Sum = %d count = %d\n", s, c);

    return 0;
}