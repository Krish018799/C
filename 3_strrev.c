#include <stdio.h>
#include <string.h>

int main()
{
    char name[100];

    printf("Enter name => ");
    gets(name);

    printf("\n%s", strrev(name)); // Here strrev is use to reverse all character

    return 0;
}