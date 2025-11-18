#include <stdio.h>
int main() {
    float num1, num2;
    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);
    float sum = num1 + num2;
    float diff = num1 - num2;
    float prod = num1 * num2;
    float quot = num1 / num2;  
    printf("\nSum = %.2f", sum);
    printf("\nDifference = %.2f", diff);
    printf("\nProduct = %.2f", prod);
    if (num2 != 0)
        printf("\nQuotient = %.2f", quot);
    else
        printf("\nQuotient = Undefined (division by zero not allowed)");

    return 0;
}
