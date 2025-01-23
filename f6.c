#include <stdio.h>
#include <ctype.h>

int main()
{
    FILE *f1;
    char ch;

    f1 = fopen("abc.txt", "r");

    while (ch != EOF)
    {
        ch = getc(f1);
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

    fclose(f1);
    
    return 0;
}