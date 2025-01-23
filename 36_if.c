#include <stdio.h>

int main()
{
    int age;

    printf("Enter age:\n");
    scanf("%d", &age);

    if (age > 0 && age <= 12)
    {
        printf("child\n");
    }
    else if (age >= 13 && age <= 19)
    {
        printf("teenager\n");
    }
    else if (age >= 20 && age <= 64)
    {
        printf("adult\n");
    }
    else if (age >= 65)
    {
        printf("sennior\n");
    }

    return 0;
}