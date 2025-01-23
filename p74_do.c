#include <stdio.h>

int main()
{
    char ch;
    int no;

    do
    {
        printf("Press s for Square\n");
        printf("Press c for Cube\n");
        printf("Press e for exit\n");

        fflush(stdin);
        printf("Enter character:\n");
        scanf("%c", &ch);

        if (ch == 's')
        {
            printf("Enter no:\n");
            scanf("%d", &no);

            printf("The square of given number is %d\n", no * no);
        }
        else if (ch == 'c')
        {
            printf("Enter no:\n");
            scanf("%d", &no);

            printf("The cubic value of given number is %d\n", no * no * no);
        }
        else if (ch == 'd')
        {
            printf("Wrong option\n");
        }
        else if (ch == 'e')
        {
            printf("Bye\n");
        }
    } while (ch != 'e');

    return 0;
}