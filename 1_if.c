#include <stdio.h>

int main()
{
    int no1, no2;
    
    printf("Enter no1:\n");
    scanf("%d", &no1);
    printf("Enter no2:\n");
    scanf("%d", &no2);

    no1 > no2 ? printf("no1 is greater") : printf("no2 is greater");

    return 0;
}