#include <stdio.h>

int main()
{
    int level;

    printf("Fasting suger level:\n");
    scanf("%d", &level);

    if (level < 80)
    {
        printf("Suger is low\n");
    }
    else if (level >= 80 && level <= 100)
    {
        printf("Suger is normal\n");
    }
    else if (level > 100)
    {
        printf("Suger is high\n");
    }

    return 0;
}