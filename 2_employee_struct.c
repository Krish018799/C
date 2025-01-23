#include <stdio.h>

struct employee
{
    int eid;
    char ename[100];
    int esalary;
};

int main()
{
    struct employee e1, e2, e3;

    // e1
    printf("\nEnter e1's eid : ");
    scanf("%d", &e1.eid);
    printf("\nEnter e1's ename : ");
    fflush(stdin);
    gets(e1.ename);
    printf("\nEnter e1's salary: ");
    scanf("%d", &e1.esalary);

    // e2
    printf("\nEnter e2's eid : ");
    scanf("%d", &e2.eid);
    printf("\nEnter e2's ename : ");
    fflush(stdin);
    gets(e2.ename);
    printf("\nEnter e2's salary: ");
    scanf("%d", &e2.esalary);

    // e3
    printf("\nEnter e3's eid : ");
    scanf("%d", &e3.eid);
    printf("\nEnter e3's ename : ");
    fflush(stdin);
    gets(e3.ename);
    printf("\nEnter e3's salary: ");
    scanf("%d", &e3.esalary);

    printf("\ne1's eid : %d, ename : %s, eprice : %d", e1.eid, e1.ename, e1.esalary);
    printf("\ne2's eid : %d, ename : %s, eprice : %d", e2.eid, e2.ename, e2.esalary);
    printf("\ne3's eid : %d, ename : %s, eprice : %d", e3.eid, e3.ename, e3.esalary);

    return 0;
}