#include <stdio.h>
#define N 100

struct book
{
    int bid;
    int bprice;
    char bname[200];
};

int main()
{
    struct book b[N];
    int n, i, price, c = 0;

    printf("Enter limit: ");
    scanf("%d", &n);

    printf("Enter price: ");
    scanf("%d", &price);

    for (i = 0; i < n; i++)
    {
        printf("Enter bid: ");
        scanf("%d", &b[i].bid);

        fflush(stdin);
        printf("Enter bname: ");
        gets(b[i].bname);

        printf("Enter bprice: ");
        scanf("%d", &b[i].bprice);
        c++;
    }
    printf("\nbid\tbname\tbmarks");
    printf("\n**********************************************************\n");
    for (i = 0; i < n; i++)
    {
        if (price < b[i].bprice)
        {
            printf("%d\t%s\t%d\n", b[i].bid, b[i].bname, b[i].bprice);
            printf("\n");
            printf("Count = %d\n", c - 1);
        }
    }
    printf("\n**********************************************************");
    return 0;
}