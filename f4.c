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
        if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U')
        {
            c++;
        }
    }

    fclose(f1);
    printf("\nTotal vovel are %d", c);

    return 0;
}