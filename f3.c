#include <stdio.h>
int main()
{
    FILE *f1;
    char ch;
    int c = 0;

    f1 = fopen("abc.txt", "r");

    while (ch != EOF)
    {
        ch = getc(f1);
        if (ch == 'a' || ch == 'A')
        {
            c++;
        }
    }

    fclose(f1);
    printf("\nTotal A are %d", c);

    return 0;
}