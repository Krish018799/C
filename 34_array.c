#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char name[100], ch;
    int x;

    printf("Enter name => ");
    gets(name);
    x = strlen(name);

    for (int i = 0; i < x; i++)
    {
        ch = name[i];
        if (isupper(ch))
        {
            printf("7");
        }
        else
        {
            printf("%c", ch);
        }
    }

    return 0;
}