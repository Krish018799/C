#include <stdio.h>

int main(){
    int ruppe;
    printf("How much ruppes you have?\n");
    scanf("%d", &ruppe);

    if (ruppe>=2000)
    {
        printf("You can buy pizza\n");
    }
    else
    {
        printf("You can buy panipuri\n");
    }
    
    return 0;
}