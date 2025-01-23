#include <stdio.h>

int main()
{
    char ch;

    printf("Press g for green\n");
    printf("Press y for Yellow\n");
    printf("Press r for Red\n");

    printf("Enter colour of light:");
    scanf("%c", &ch);

    if (ch == 'g' || ch == 'G')
    {
        printf("Car is allowed to go\n");
    }
    else if (ch == 'y' && ch == 'Y')
    {
        printf("Car has to wait\n");
    }
    else if (ch == 'r' && ch == 'R')
    {
        printf("Car has to stop\n");
    }
    else
    {
        printf("Unrecognized signal\n");
    }

    return 0;
}