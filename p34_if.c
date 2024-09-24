#include <stdio.h>
//1 press= max between two & 2 for odd even
int main()
{
    int a, c;
    float height, base, r;
    char ch;
    printf("Press a for Area of Triangle\n");
    printf("Press c for Area of Circle\n");

    printf("Enter Character:\n");
    scanf("%c", &ch);

    if (ch == 'a')
    {
        printf("Enter Height:\n");
        scanf("%f", &height);
        printf("Enter Base:\n");
        scanf("%f", &base);
        printf("The area of Triangle is %.2f\n", 0.5 * height * base);
    }
    else if (ch == 'c')
    {
        printf("Enter Radius:\n");
        scanf("%f", &r);
        printf("The area of Circle is %.2f\n", 3.14 * r * r);
    }

    return 0;
}