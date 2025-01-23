#include <stdio.h>

int main()
{
    char n1[100];
    char n2[100];
    int i;
    printf("\n Enter 1st Name=> ");
    gets(n1);
    printf("\n Enter 2nd NAme=> ");
    gets(n2);
    i = strcmp(n1, n2);
    if (i == 0)
    {
        printf("\n both string are equal ");
    }
    else
    {
        printf("\n both string are not equal");
    }

    return 0;
}
