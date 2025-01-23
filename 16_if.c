#include <stdio.h>

int main()
{
    int temp;

    printf("Enter temperature:\n");
    scanf("%d", &temp);

    if (temp < 0)
    {
        printf("Freezing Atmosphere\n");
    }
    else if (temp >= 0 && temp < 10)
    {
        printf("Very cold atmosphere\n");
    }
    else if (temp >= 10 && temp < 20)
    {
        printf("Cold atmosphere\n");
    }
    else if (temp >= 20 && temp < 30)
    {
        printf("Normal atmosphere\n");
    }
    else if (temp >= 30 && temp < 40)
    {
        printf("Hot atmosphere\n");
    }
    else if (temp > 40)
    {
        printf("Very hot atmosphere\n");
    }

    return 0;
}