#include <stdio.h>
// enter number kari teno sqare & qube karvo
int main()
{
    int no;
    char op;
    printf("Press s for squar & c for cube\n");
    printf("Enter characer:\n");
    scanf("%c", &op);

    if (op == 's' || op == 'S')
    {
        printf("\nEnter no =>");
        scanf("%d", &no);
        printf("\nSquare = %d", no * no);
    }
    else if (op == 'c' || op == 'C')
    {

        printf("\nEnter no =>");
        scanf("%d", &no);
        printf("\nCube = %d", no * no * no);
    }
    else
    {
        printf("\nWrong opt");
    }

    return 0;
}