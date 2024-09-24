#include <stdio.h>
#include <ctype.h>

int main()
{
    char ch;
    printf("Enter character:\n");
    scanf("%c", &ch);

    if (isupper(ch))
    {
        printf("Your character is Uppercase\n");
    }
    else if (islower(ch))
    {
        printf("Your character is Lowercase\n");
    }
    else
    {
        printf("Other\n");
    }

    return 0;
}