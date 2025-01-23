#include <stdio.h>
#include <string.h>
#include<ctype.h>

int main()
{
    char name[100];
    int x, c1 = 0, c2 = 0;
    char ch;

    printf("Enter name =>");
    gets(name);
    x = strlen(name);

    for (int i = 0; i < x; i++)
    {
        ch = name[i];
        if (isupper(ch))
        {
            c1++;
        }
        else if (islower(ch))
        {
            c2++;
        }
    }
    printf("Total upper character is %d\n", c1);
    printf("Total  character is %d\n", c2);
    
    return 0;
}