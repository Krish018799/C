#include <stdio.h>

int main()
{
    int quantity;
    char ch;
    printf("Press p chor Pizza\n");
    printf("Press d chor Dosa\n");
    printf("Press s chor Sandwich\n");
    printf("Press m chor Maggi\n");

    printf("Enter character:\n");
    scanf("%c", &ch);

    if (ch == 'p')
    {
        printf("Puch pizza 200Rs.\n");
        printf("Enter quantity:\n");
        scanf("%d", &quantity);
        printf("Your bill is %d\n", quantity * 200);
    }
    else if (ch == 'd')
    {
        printf("Butter dosa 120Rs.\n");
        printf("Enter quantity:\n");
        scanf("%d", &quantity);
        printf("Your bill is %d\n", quantity * 120);
    }
    else if (ch == 's')
    {
        printf("vegetable sandwich 120Rs.\n");
        printf("Enter quantity:\n");
        scanf("%d", &quantity);
        printf("Your bill is %d\n", quantity * 120);
    }
    else if (ch == 'm')
    {
        printf("Regular maggi 90Rs.\n");
        printf("Enter quantity:\n");
        scanf("%d", &quantity);
        printf("Your bill is %d\n", quantity * 90);
    }

    return 0;
}