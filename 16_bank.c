#include <stdio.h>

struct bank
{
    int acno;
    char custname[20];
    float bal;
};

int main()
{
    float x;
    struct bank b1;
    printf("\nEnter Account No =>");
    scanf("%d", &b1.acno);
    fflush(stdin);
    printf("\nEnter Customer Name =>");
    gets(b1.custname);
    printf("\nEnter Balance =>");
    scanf("%f", &b1.bal);
    printf("\nBefore WithDrawn");
    printf("\nAccount No\tCustomer Name\tBalance");
    printf("\n=====================================");
    printf("\n%d\t\t%s\t\t%.2f", b1.acno, b1.custname, b1.bal);
    printf("\n=====================================");
    printf("\n\nEnter amount of withdrawn =>");
    scanf("%f", &x);
    b1.bal = b1.bal - x;
    printf("\n\nAfter WithDrawn");
    printf("\nAccount No\tCustomer Name\tBalance");
    printf("\n=====================================");
    printf("\n%d\t\t%s\t\t%.2f", b1.acno, b1.custname, b1.bal);
    printf("\n=====================================");
    return 0;
}