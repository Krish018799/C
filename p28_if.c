#include <stdio.h>

int main()
{
    char ch;
    printf("Enter character:\n");
    scanf("%c", &ch);

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        printf("Your character is vovel\n");
    }
    else
    {
        printf("Your character isn't vovel\n");
    }

    return 0;
}