#include <stdio.h>

void oddeven()
{
    int n1;
    printf("\n Odd Even");
    printf("\n Enter first No.=>");
    scanf("%d", &n1);
    if (n1 % 2 == 0)
    {
        printf("\nNo is even");
    }
    else
    {
        printf("\nNo is odd");
    }
    printf("\n=============================");
}

void pn()
{
    int n1;
    printf("\n Positive negetive");
    printf("\n Enter 1st digit=> ");
    scanf("%d", &n1);
    if (n1 > 0)
    {
        printf("\n It's Positive");
    }
    else
    {
        printf("\n It's Negetive");
    }
    printf("\n=============================");
}

int main()
{
    oddeven();
    pn();
    return 0;
}