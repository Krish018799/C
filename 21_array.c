#include <stdio.h>
#include <string.h>

int main()
{
    char name[100];
    int x;

    printf("Enter name =>\n");
    gets(name);

    x = strlen(name);     // Here strlen is for to know total length of name 
    printf("Name = %s\n", name);
    printf("Length = %d\n", x);

    return 0;
}