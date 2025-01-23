#include <stdio.h>

void add()
{
    int n1, n2;
    printf("\n Addition of 2 Number");
    printf("\n Enter first No.=>");
    scanf("%d", &n1);
    printf("\n Enter first No.=>");
    scanf("%d", &n2);
    printf("\n Addition is=> %d", n1 + n2);
    printf("\n=============================");
}
void oddeven()
{
    int n1;
    printf("\n Odd Even");
    printf("\n Enter first No.=>");
    scanf("%d", &n1);
    if (n1 % 2 == 0)
    {
        printf("\nNo is even");
    }
    else
    {
        printf("\nNo is odd");
    }
    printf("\n=============================");
}
void table()
{
    int n1, i;
    printf("\n Table");
    printf("\n ENter Table No.=> ");
    scanf("%d", &n1);
    for (i = 0; i <= 10; i++)
    {
        printf("\n %d * %d = %d ", n1, i, n1 * i);
    }
    printf("\n=============================");
}
void max2()
{
    int n1, n2;
    printf("\n Maximum Btw 2");
    printf("\n Enter 1st Number=> ");
    scanf("%d", &n1);
    printf("\n Enter 2nd Number=> ");
    scanf("%d", &n2);
    if (n1 > n2)
    {
        printf("\n 1st Number is bigger");
    }
    else if (n1 < n2)
    {
        printf("\n 2nd Number is bigger");
    }
    else
    {
        printf("\n Both Are Equal");
    }
    printf("\n=============================");
}
void max3()
{
    int n1, n2, n3;
    printf("\n Enter 1st Digit=> ");
    scanf("%d", &n1);
    printf("\n Enter 2nd Digit=> ");
    scanf("%d", &n2);
    printf("\n Enter 3rd Digit=> ");
    scanf("%d", &n3);
    if (n1 > n2 && n1 > n3)
    {
        printf("\n Number 1 Max");
    }
    else if (n1 < n2 && n2 > n3)
    {
        printf("\n Number 2 Max");
    }
    else if (n1 < n3 && n2 < n3)
    {
        printf("\n Number 3 Max");
    }
    else
    {
        printf("\n All 3 Are Equal");
    }
    printf("\n=============================");
}
void pn()
{
    int n1;
    printf("\n Positive negetive");
    printf("\n Enter 1st digit=> ");
    scanf("%d", &n1);
    if (n1 > 0)
    {
        printf("\n It's Positive");
    }
    else
    {
        printf("\n It's Negetive");
    }
    printf("\n=============================");
}
void aot()
{
    float h, b;
    printf("\n Area of Triangle");
    printf("\n Enter the Hight=> ");
    scanf("%f", &h);
    printf("\n Enter the Base=> ");
    scanf("%f", &b);
    printf("\n Area Of triangle is=> %.2f", 0.5 * h * b);
    printf("\n");
}
void aoc()
{
    float r;
    printf("\n Area of Circle");
    printf("\n Enter the Redius=> ");
    scanf("%f", &r);
    printf("\n Area of the circle=> %.2f", 3.14 * r * r);
    printf("\n=============================");
}
void fac()
{
    int i, n, s = 1;
    printf("\n Factorial");
    printf("\n Enter the limit=> ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf(" * %d", i);
        s = s * i;
    }
    printf("\n Above All Multiplication is=> %d", s);
    printf("\n");
    printf("\n=============================");
}
void cube()
{
    int i, l;
    printf("\n Enter the limit for Cube=>");
    scanf("%d", &l);
    for (i = 1; i <= l; i++)
    {
        printf("\n %d", i * i * i);
    }
    printf("\n=============================");
}

int main()
{
    int op;
    printf("\n 1 For Addition");
    printf("\n 2 For Odd Even");
    printf("\n 3 For Max Out of 2");
    printf("\n 4 For Max Out of 3");
    printf("\n 5 For Positive Negetive");
    printf("\n 6 For Area of Trianlgle");
    printf("\n 7 For Area of Circle");
    printf("\n 8 For Factorial");
    printf("\n 9 For Cube");
    printf("\n 10 for max out of 3");
    printf("\n Select Option From Above=> ");
    scanf("%d", &op);
    if (op == 1)
    {
        add();
    }
    else if (op == 2)
    {
        oddeven();
    }
    else if (op == 3)
    {
        table();
    }
    else if (op == 4)
    {
        max2();
    }
    else if (op == 5)
    {
        pn();
    }
    else if (op == 6)
    {
        aot();
    }
    else if (op == 7)
    {
        aoc();
    }
    else if (op == 8)
    {
        fac();
    }
    else if (op == 9)
    {
        cube();
    }
    else if (op == 10)
    {
        max3();
    }

    return 0;
}