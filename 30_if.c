#include <stdio.h>

int main()
{
    int class, held;
    int attendance;

    printf("Enter total classes\n");
    scanf("%d", &class);
    printf("Enter classes held\n");
    scanf("%d", &held);

    attendance = (held * 100) / class;
    printf("Attendance  = %d\n", attendance);

    if (attendance < 75)
    {
        printf("You will not be allowed to sit in exam\n");
    }
    else
    {
        printf("You will be allowed to sit in exam\n");
    }

    return 0;
}