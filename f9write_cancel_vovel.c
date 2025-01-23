#include <stdio.h>
#include <ctype.h>

int main()
{
    FILE *f1, *f2;
    char ch;

    f1 = fopen("abc.txt", "r");
    f2 = fopen("pqr.txt", "w");

    while (ch != EOF)
    {
        ch = getc(f1);
        if (ch != 'a' && ch != 'A' && ch != 'e' && ch != 'E' && ch != 'i' && ch != 'I' && ch != 'o' && ch != 'O' && ch != 'u' && ch != 'U')
        {
            putc(ch, f2);
        }
    }

    fclose(f1);
    fclose(f2);

    printf("\nCopied");

    return 0;
}