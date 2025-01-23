#include <stdio.h>

int main()
{
    float bmi;

    printf("Enter BMI:\n");
    scanf("%f", &bmi);

    if (bmi < 18.5)
    {
        printf("underweight\n");
    }
    else if (bmi >= 18.5 && bmi < 24.9)
    {
        printf("normal\n");
    }
    else if (bmi >= 25 && bmi < 29.9)
    {
        printf("overweight\n");
    }
    else if (bmi >= 30)
    {
        printf("obese\n");
    }

    return 0;
}