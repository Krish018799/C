#include <stdio.h>

int main()
{
    int a = 20, b = 2;
    int *ptra, *ptrb;
    ptra = &a;
    ptrb = &b;

    printf("Add = %d\n", *ptra + *ptrb);
    printf("Sub = %d\n", *ptra - *ptrb);
    printf("Multi = %d\n", *ptra * *ptrb);
    printf("Div = %d\n", *ptra / *ptrb);

    return 0;
}