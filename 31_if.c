#include <stdio.h>

int main()
{
    int age;
    char ch, marit;

    printf("Press m for male\n");
    printf("Press f for female\n");

    printf("Enter gender:\n");
    scanf("%c", &ch);
    
    printf("Enter marital status:\n");
    scanf("%c", &marit);

    printf("Enter age:");
    scanf("%d", &age);

    if (ch == 'm' || ch == 'M')
    {

        if (age > 20 && age < 40)
        {
            printf("You may work anywhere\n");
        }
        else if (age > 40 && age < 60)
        {
            printf("You may work anywhere\n");
        }
        else
        {
            printf("Error\n");
        }
    }
    else if (ch == 'f' || ch == 'F')
    {
        printf("You will work only in urban areas\n");
    }

    return 0;
}