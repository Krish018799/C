#include <stdio.h>

int main()
{
    float height, base;
    printf("Enter Height\n");
    scanf("%f", &height);
    printf("Enter Base\n");
    scanf("%f", &base);
    printf("The Area of Triangle is %.2f\n", 0.5 * height * base);

    return 0;
}