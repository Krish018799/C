#include <stdio.h>
void sum()
{
    int n1, n2;
    printf("\n Enter 1st Number=> ");
    scanf("%d", &n1);
    printf("\n Enter 2nd Number=> ");
    scanf("%d", &n2);
    printf("\n Addition is= %d", n1 + n2);
}
void sub()
{
    int n1, n2;
    printf("\n Enter 1st Number=> ");
    scanf("%d", &n1);
    printf("\n Enter 2nd Number=> ");
    scanf("%d", &n2);
    printf("\n Substraction is= %d", n1 - n2);
}
void mul()
{
    int n1, n2;
    printf("\n Enter 1st Number=> ");
    scanf("%d", &n1);
    printf("\n Enter 2nd Number=> ");
    scanf("%d", &n2);
    printf("\n Multiplication is= %d", n1 * n2);
}
void div()
{
    int n1, n2;
    printf("\n Enter 1st Number=> ");
    scanf("%d", &n1);
    printf("\n Enter 2nd Number=> ");
    scanf("%d", &n2);
    printf("\n Division is= %d", n1 / n2);
}
int main()
{
    int op;
    printf("\n 1 for Addition");
    printf("\n 2 for Substraction");
    printf("\n 3 for Multiplaction");
    printf("\n 4 for Division");
    printf("\n Select Option=> ");
    scanf("%d", &op);
    if (op == 1)
    {
        sum();
    }
    else if (op == 2)
    {
        sub();
    }
    else if (op == 3)
    {
        mul();
    }
    else if (op == 4)
    {
        div();
    }
    else
    {
        printf("\n Wait for Update");
    }

    return 0;
}