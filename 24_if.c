#include <stdio.h>

int main()
{
    int age;

    printf("Enter age:");
    scanf("%d", &age);

    if (age >= 60)
    {
        printf("You are senior citizen\n");
    }
    else
    {
        printf("You are not senior citizen\n");
    }

    return 0;
}