#include <stdio.h>

void add(int n1, int n2)
{
    printf("Sum = %d\n", n1 + n2);
}

void max(int n1, int n2)
{
    if (n1 > n2)
    {
        printf("n1 is greater\n");
    }
    else
    {
        printf("n2 is greater\n");
    }
}

int main()
{
    int n1, n2;
    printf("Enter values: ");
    scanf("%d %d", &n1, &n2);
    add(n1, n2);
    max(n1, n2);
    return 0;
}