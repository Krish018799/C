#include <stdio.h>
#include <string.h>

int main()
{
    char name[100];

    printf("Enter name => ");
    gets(name);

    printf("\n %s", strupr(name)); // here strupr is use to convert all characters into uppercase

    return 0;
}