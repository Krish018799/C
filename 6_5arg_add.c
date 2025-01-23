#include <stdio.h>

void add(int n1, int n2, int n3, int n4, int n5)
{
    printf("Sum = %d\n", n1 + n2 + n3 + n4 + n5);
}
int main()
{
    int n1, n2, n3, n4, n5;
    printf("Enter numbers :- ");
    scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);
    add(n1, n2, n3, n4, n5);
    return 0;
}