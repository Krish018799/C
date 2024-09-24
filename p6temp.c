#include <stdio.h>

int main()
{
    int T1, T2, T3, T4, total, avg;
    T1 = 30;
    T2 = 33;
    T3 = 45;
    T4 = 40;
    total = T1 + T2 + T3 + T4;
    avg = total / 4;
    printf("The Total of Temperature is %d\n", total);
    printf("The Average of all temperature is %d\n", avg);
    return 0;
}