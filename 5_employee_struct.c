#include <stdio.h>
#define N 100

struct employee
{
    int eid;
    int esalary;
    char ename[200];
};

int main()
{
    struct employee e[N];
    int n, i;

    printf("Enter limit: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter eid: ");
        scanf("%d", &e[i].eid);

        fflush(stdin);
        printf("Enter ename: ");
        gets(e[i].ename);

        printf("Enter esalary: ");
        scanf("%d", &e[i].esalary);
    }
    printf("\neid\tename\temarks");
    printf("\n**********************************************************");
    for (i = 0; i < n; i++)
    {
        printf("\n%d\t%s\t%d", e[i].eid, e[i].ename, e[i].esalary);
    }
    printf("\n**********************************************************");
    return 0;
}