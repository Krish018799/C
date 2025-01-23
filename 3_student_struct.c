#include <stdio.h>

struct student
{
    int sid;
    char sname[100];
    int eng;
    int hindi;
};

int main()
{
    struct student s1, s2;
    printf("\nEnter s1's sid : ");
    scanf("%d", &s1.sid);
    printf("\nEnter s1's ename : ");
    fflush(stdin);
    gets(s1.sname);
    printf("\nEnter s1's eng marks: ");
    scanf("%d", &s1.eng);
    printf("\nEnter s1's hindi marks: ");
    scanf("%d", &s1.hindi);

    printf("\nEnter s2's sid : ");
    scanf("%d", &s2.sid);
    printf("\nEnter s2's ename : ");
    fflush(stdin);
    gets(s2.sname);
    printf("\nEnter s2's eng marks: ");
    scanf("%d", &s2.eng);
    printf("\nEnter s2's hindi marks: ");
    scanf("%d", &s2.hindi);

    printf("\ns1's sid : %d, sname : %s, eng : %d, hindi : %d\n", s1.sid, s1.sname, s1.eng, s1.hindi);
    printf("s2's sid : %d, sname : %s, eng : %d, hindi : %d\n", s2.sid, s2.sname, s2.eng, s2.hindi);

    return 0;
}