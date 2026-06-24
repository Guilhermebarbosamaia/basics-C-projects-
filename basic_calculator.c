#include <stdio.h>
#include <stdlib.h>

int main()
{
    double num1;
    double num2;
    printf("Enter first number:\n");
    scanf("%lf", &num1);
    printf("\nEnter second number:\n");
    scanf("%lf", &num2);

    printf("\nPlus: %5.2lf", num1 + num2);
    printf("\nMinus: %5.2lf", num1 - num2);
    printf("\nTimes: %5.2lf", num1 * num2);
    printf("\nShare: %5.2lf", num1 / num2);

    return 0;
}