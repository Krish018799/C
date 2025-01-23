#include <stdio.h>

void sum(float n1, float n2)
{
    printf("\n Addition is= %.2f", n1 + n2);
}
void sub(float n1, float n2)
{
    printf("\n Substraction is= %.2f", n1 - n2);
}
void mul(float n1, float n2)
{
    printf("\n Multiplication is= %.2f", n1 * n2);
}
void div(float n1, float n2)
{
    printf("\n Division is= %.2f", n1 / n2);
}

int main()
{   
    float n1, n2;
    printf("\n Enter 1st Number=> ");
    scanf("%f", &n1);
    printf("\n Enter 2nd Number=> ");
    scanf("%f", &n2);
    sum(n1,n2);
    sub(n1,n2);
    mul(n1,n2);
    div(n1,n2);
}