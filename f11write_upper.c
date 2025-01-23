#include <stdio.h>
#include <ctype.h>

int main()
{
    FILE *f1, *f2, *f3;
    char ch;

    f1 = fopen("abc.txt", "r");
    f2 = fopen("pqr.txt", "w");
    f2 = fopen("ghj.txt", "w");

    while (ch != EOF)
    {
        ch = getc(f1);
        if (isupper(ch))
        {
            putc(ch, f2);
        }
        else
        {
            putc(ch, f3);
        }
    }

    fclose(f1);
    fclose(f2);
    fclose(f3);

    printf("\nCopied");

    return 0;
}