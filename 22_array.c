#include <stdio.h>
#include <string.h>

int main()
{
    char name[100];
    int x, c = 0;
    char ch;

    printf("Enter name =>\n");
    gets(name);
    x = strlen(name);

    for (int i = 0; i < x; i++)
    {
        ch = name[i];
        printf("%c\n", ch);
    }

    return 0;
}