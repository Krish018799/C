#include <stdio.h>
#include <string.h>

int main()
{
    char name[100], ch;
    int x, c = 0;

    printf("Enter name => ");
    gets(name);
    x = strlen(name);

    for (int i = 0; i < x; i++)
    {
        ch = name[i];
        if (ch == 'k' || ch == 'K')
        {
            printf("7");
            c++;
        }
        else
        {
            printf("%c", ch);
        }
    }
    printf("\nCount = %d", c - 1);
    return 0;
}