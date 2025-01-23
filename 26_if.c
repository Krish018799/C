#include <stdio.h>

int main()
{
    int age, day;
    char gender;

    printf("Enter gender:");
    scanf("%c", &gender);
    printf("Enter age:");
    scanf("%d", &age);

    if (age >= 18 && age < 30)
    {
        if (gender == 'm' || gender == 'M')
        {

            printf("Number of days:");
            scanf("%d", &day);

            printf("F 750\n");
        }
    }
    else if (age >= 30 && age <= 40)
    {
        if (gender == 'm' || gender == 'M')
        {
            printf("Number of days:");
            scanf("%d", &day);

            printf("F 850\n");
        }
    }

    return 0;
}