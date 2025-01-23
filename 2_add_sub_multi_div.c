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
    float n1, n2;
    printf("\n Enter 1st Number=> ");
    scanf("%f", &n1);
    printf("\n Enter 2nd Number=> ");
    scanf("%f", &n2);
    printf("\n Division is= %.2f", n1 / n2);
}

int main()
{   
    sum();
    sub();
    mul();
    div();
}