#include <stdio.h>

// if we want to return int value than replace void with int 
// Similarly for float and char
int add(int n1, int n2)
{
    return n1 + n2;
}

int max(int n1, int n2)
{
    if (n1 > n2)
    {
        return n1;
    }
    else
    {
        return n2;
    }
}

int main()
{
    int c;
    c = max(22, 3);
    printf("\nMax = %d", c);
    c = add(22, 33);
    printf("\nAdd = %d", c);

    return 0;
}