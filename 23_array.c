#include <stdio.h>
#include <string.h>

// This progrmme is use for to count total space in name
int main()
{
    char name[100];
    int x, c = 0;
    char ch;

    printf("Enter name =>");
    gets(name);
    x = strlen(name);

    for (int i = 0; i < x; i++)
    {
        ch = name[i];
        if (ch == ' ')
        {
            c++;
        }
    }
    printf("Total spaces are %d\n", c);

    return 0;
}