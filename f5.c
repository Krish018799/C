#include <stdio.h>
#include <ctype.h>

int main()
{
    FILE *f1;
    char ch;
    int c1 = 0, c2 = 0;

    f1 = fopen("abc.txt", "r");

    while (ch != EOF)
    {
        ch = getc(f1);
        if (isupper(ch))
        {
            c1++;
        }
        else if (islower(ch))
        {
            c2++;
        }
    }

    fclose(f1);
    printf("\nTotal upper character are %d", c1);
    printf("\nTotal lower character are %d", c2);

    return 0;
}