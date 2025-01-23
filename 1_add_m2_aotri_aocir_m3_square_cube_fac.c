#include <stdio.h>

void add()
{
    int a, b;
    printf("\nEnter 2nos ->");
    scanf("%d %d", &a, &b);
    printf("\nAdd = %d", a + b);
}

void max2()
{
    int a, b;
    printf("\nEnter 2nos ->");
    scanf("%d %d", &a, &b);
    if (a > b)
    {
        printf("\nNo1 is max");
    }
    else
    {
        printf("\nNo2 is max");
    }
}

void areaoftriangel()
{
    int base;
    float height;
    printf("Enter height & base => ");
    scanf("%f %d", &height, &base);
    printf("Area of triangle = %.2f\n", 0.5 * height * base);
}

void areaofcircle()
{
    int r;
    printf("Enter radius => ");
    scanf("%d", &r);
    printf("Area of circle = %.2f\n", 3.14 * r * r);
}

void max3()
{
    int a, b, c;
    printf("Enter values: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a > b && a > c)
    {
        printf("No1 is greater\n");
    }
    else if (b > a && b > c)
    {
        printf("No2 is greater\n");
    }
    else if (c > a && c > b)
    {
        printf("No3 is greater\n");
    }
}

void table()
{
    int no, i;
    printf("Enter no: ");
    scanf("%d", &no);

    for (i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d\n", no, i, no * i);
    }
}

void sqare()
{
    int a;
    printf("Enter no: ");
    scanf("%d", &a);

    printf("Square = %d\n", a * a);
}

void cube()
{
    int a;
    printf("Enter no: ");
    scanf("%d", &a);

    printf("Cube = %d\n", a * a * a);
}

void factorial()
{
    int no, s = 1;

    printf("Enter no:\n");
    scanf("%d", &no);

    for (int i = 1; i <= no; i++)
    {
        s = s * i;
    }
    printf("\nThe multi is %d\n", s);
}

int main()
{
    add();
    max2();
    areaoftriangel();
    areaofcircle();
    max3();
    table();
    sqare();
    cube();
    factorial();
}