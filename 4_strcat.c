#include <stdio.h>
#include <string.h>

int main()
{
    char n1[100], n2[100];

    printf("Enter n1 => ");
    gets(n1);
    printf("\n");
    printf("Enter n2 => ");
    gets(n2);

    strcat(n1, n2);

    printf("\nn1 = %s", n1); // here strcat merge value of n2 into n1 but there is no change in n2

    return 0;
}