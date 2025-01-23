#include <stdio.h>
#include <string.h>
// This programme is for to count total no of a particular single character 

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
        if (ch == 'a' || ch == 'A')
        {
            c++;
        }
    }
    printf("Total A are %d\n", c);
    
    return 0;
}