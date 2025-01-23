#include <stdio.h>
#include <ctype.h>

int main()
{
    FILE *f1, *f2, *f3;
    char ch;

    f1 = fopen("abc.txt", "r");
    f2 = fopen("pqr.txt", "w");
    f3 = fopen("trp.txt", "w");

    while (ch != EOF)
    {
        ch = getc(f1);
        if (ch == 'a' && ch == 'A' && ch == 'e' && ch == 'E' && ch == 'i' && ch == 'I' &&
            ch == 'o' && ch == 'O' && ch == 'u' && ch == 'U')
        {
            // Write vowels to f2
            putc(ch, f2);
        }
        else
        {
            // Write non-vowels to f3
            putc(ch, f3);
        }
    }

    // Close files
    fclose(f1);
    fclose(f2);
    fclose(f3);

    printf("\nCopied\n");

    return 0;
}