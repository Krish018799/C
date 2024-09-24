#include <stdio.h>

int main()
{
    int no;

    printf("Enter Day no.:\n");
    scanf("%d", &no);

    switch(no)
    {
        case 1:
            printf("\nMon");
        case 2:
            


        default:
            printf("\nWrong dayno");
    }
    return 0;
}