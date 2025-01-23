#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char name[100];
    int x, c1 = 0, c2 = 0;
    char ch;

    printf("Enter name =>");
    gets(name);
    x = strlen(name);

    for (int i = 0; i < x; i++)
    {
        ch = name[i];
        if (isupper(ch))
        {
            printf("%c", tolower(ch));
        }
        else if (islower(ch))
        {
            printf("%c", toupper(ch));
        }
        else
        {
            printf("%c", ch);
        }
    }

    return 0;
}