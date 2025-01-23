#include <stdio.h>

int main()
{
    int no, s=0;

    printf("Enter no:\n");
    scanf("%d", &no);

    for (int i = 1; i <= no; i++)
    {
        printf("%d + ", i * i);
        s = s + (i*i);
    }
    printf("The total is %d\n", s);
    
    return 0;
}