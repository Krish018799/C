#include <stdio.h>

int main()
{
    char name[100];

    printf("Enter name =>\n");
    gets(name);     // gets(name) is use for automaticaly name

    printf("Name = %s\n", name);

    return 0;
}