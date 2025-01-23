#include <stdio.h>
#include <string.h>

int main()
{
    char name[100];
    int x, c1 = 0, c2 = 0;
    char ch;

    printf("Enter name =>");
    gets(name);
    x = strlen(name);

    for (int i = x - 1; i >= 0; i--)
    {
        ch = name[i];
        printf("%c", ch);
    }

    return 0;
}