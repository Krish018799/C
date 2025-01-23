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
    int n, i, id,c=0;

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


    printf("Enter id: ");
    scanf("%d", &id);

    for (i = 0; i < n; i++)
    {
        if (b[i].bid == id)
        {
            printf("\nbid\tbname\tbmarks");
            printf("\n**********************************************************\n");
            printf("%d\t%s\t%d\n", b[i].bid, b[i].bname, b[i].bprice);
            printf("\n**********************************************************");
            c=1;
            break;
        }
    }

    if(c==0)
    {
        printf("\nNot Found");
    }

    return 0;
}