#include <stdio.h>
// F=(°C× 9/5)+32

int main()
{
    int celsius;
    printf("Enter the value:\n");
    scanf("%d", &celsius);
    float fahrenheit = (celsius * (9.0 / 5.0)) + 32;

    printf("The Temperature in Fahrenheit is %.2f\n", fahrenheit);

    return 0;
}