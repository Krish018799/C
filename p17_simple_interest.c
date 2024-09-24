#include <stdio.h>

int main()
{
    int r, t;
    float p;
    printf("Enter The value of p:\n");
    scanf("%f", &p);

    printf("Enter The value of r:\n");
    scanf("%d", &r);

    printf("Enter The value of t:\n");
    scanf("%d", &t);

    printf("The value of Simple interest is %f\n", (p * r * t) / 100);

    return 0;
}