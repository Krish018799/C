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
    int n, i;

    printf("Enter limit: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter bid: ");
        scanf("%d", &b[i].bid);

        fflush(stdin);
        printf("Enter bname: ");
        gets(b[i].bname);

        printf("Enter bprice: ");
        scanf("%d", &b[i].bprice);

    }
    printf("\nbid\tbname\tbmarks");
    printf("\n**********************************************************");
    for (i = 0; i < n; i++)
    {
        printf("\n%d\t%s\t%d", b[i].bid, b[i].bname, b[i].bprice);
    }
    printf("\n**********************************************************");
    return 0;
}