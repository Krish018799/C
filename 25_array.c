#include <stdio.h>
#include <string.h>

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
        if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U')
        {
            c++;
        }
    }
    printf("Total Vovel character are %d\n", c);
    
    return 0;
}