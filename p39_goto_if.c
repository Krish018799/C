#include <stdio.h>
// Here goto for cycle. here this cycle continue untile both numbers are possitive
int main()
{
    int no1, no2;
    krish:
    printf("Enter no1:\n");
    scanf("%d", &no1);
    printf("Enter no2:\n");
    scanf("%d", &no2);

    if (no1 > 0 && no2 > 0)
    {
        printf("%d\n", no1 * no2);
    }
    else
    {
        printf("Why you enter negetive\n");
        goto krish;     
    }
    return 0;
}