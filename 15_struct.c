#include <stdio.h>
#include <string.h>
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
    int n, i, c = 0;
    char name[100];

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

    fflush(stdin);
    printf("Enter name: ");
    gets(name);

    for (i = 0; i < n; i++)
    {
        if (strcmp(b[i].bname, name) == 0)
        {
            printf("\nbid\tbname\tbmarks");
            printf("\n**********************************************************\n");
            printf("%d\t%s\t%d\n", b[i].bid, b[i].bname, b[i].bprice);
            printf("\n**********************************************************");
            c = 1;
            break;
        }
    }

    if (c == 0)
    {
        printf("\nNot Found");
    }

    return 0;
}