#include <stdio.h>

int main()
{
    int hour, p1, p2;
    char ch;
    printf("Press m for Male\n");
    printf("Press f for Female\n");

    printf("Enter character:\n");
    scanf("%c", &ch);

    if (ch == 'm')
    {
        printf("Enter hours:\n");
        scanf("%d", &hour);
        p1 = hour * 50;
        printf("Your sallary is %d\n", p1);
    }
    else if (ch = 'f')
    {
        printf("Enter hours:\n");
        scanf("%d", &hour);
        p2 = hour * 60;
        printf("Your sallary is %d\n", p2);
    }
    return 0;
}