#include <stdio.h>
#define N 100
struct student
{
    int sid;
    char sname[200];
    float smarks;
};

int main()
{
    struct student s[N];
    int n, i;

    printf("Enter limit: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter sid: ");
        scanf("%d", &s[i].sid);
        fflush(stdin);
        printf("Enter sudent name: ");
        gets(s[i].sname);
        printf("Enter student marks of Maths: ");
        scanf("%d", &s[i].smarks);
    }
    printf("\nsid\tsname\tsmarks");
    printf("\n***********************************************************");
    for (i = 0; i < n; i++)
    {
        printf("\n%d\t%s\t%d", s[i].sid, s[i].sname, s[i].smarks);
    }
    printf("\n *************************************************************");

    return 0;
}