#include <stdio.h>
// For factorial
int main()
{
    int no, s=1;

    printf("Enter no:\n");
    scanf("%d", &no);

    for (int i = 1; i <= no; i++)
    {
        printf("%d * ", i);
        s = s * i;
    }
    printf("\nThe multi is %d", s);
    
    return 0;
}