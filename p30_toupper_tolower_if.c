#include <stdio.h>
#include <ctype.h>

int main()
{
    char ch;
    printf("Enter character:\n");
    scanf("%c", &ch);

    if (isupper(ch))
    {
        printf("%c", tolower(ch));
    }
    else if (islower(ch))
    {
        printf("%c", toupper(ch));
    }
    else
    {
        printf("Other\n");
    }

    return 0;
}