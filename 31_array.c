#include <stdio.h>
#include <string.h>

int main()
{
    char name[100], ch;
    int x, i;

    printf("Enter name => ");
    gets(name);
    x = strlen(name);

    for (i = 0; i < x; i++)
    {
        ch = name[i];
        if (ch != ' ')
        {
            printf("%c", ch);
        }
    }

    return 0;
}