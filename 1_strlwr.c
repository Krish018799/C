#include <stdio.h>
#include <string.h>

int main()
{
    char name[100];

    printf("Enter name => ");
    gets(name);

    // Here strlwr changes all character in name into lowercase
    printf("\n %s", strlwr(name));

    return 0;
}