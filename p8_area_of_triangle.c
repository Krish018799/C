#include <stdio.h>

int main()
{
    int base;
    float height, area;

    height = 2;
    base = 3;
    area = 0.5 * height * base;

    printf("The area of triangle is %.2f\n", area);
    return 0;
}