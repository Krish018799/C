#include <stdio.h>
#define N 100
struct student
{
    int sid;
    char sname[200];
    int seng;
    int shindi;
    int total;
    char ch;
};

int main()
{
    struct student s[N];
    int n, i;

    printf("Enter limit: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        fflush(stdin);
        printf("Enter sudent name: ");
        gets(s[i].sname);
        printf("Enter gender: ");
        scanf("%c", &s[i].ch);
        printf("Enter student marks of Eng: ");
        scanf("%d", &s[i].seng);
        printf("Enter student marks of Hindi: ");
        scanf("%d", &s[i].shindi);
    }
    printf("\ngender\tsname\tseng\tshindi\ttotal");
    printf("\n***********************************************************");
    for (i = 0; i < n; i++)
    {
        printf("\n%c\t%s\t%d\t%d\t%d", s[i].ch, s[i].sname, s[i].seng, s[i].shindi, s[i].seng + s[i].shindi);
    }
    printf("\n***********************************************************");

    return 0;
}