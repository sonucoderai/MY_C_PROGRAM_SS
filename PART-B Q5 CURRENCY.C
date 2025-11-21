#include <stdio.h>
void simulateExchange(float a, float b) {
    float temp = a;
    a = b;
    b = temp;
    printf("\n--- Simulation Result (Call by Value) ---");
    printf("\nCurrency A: %.2f", a);
    printf("\nCurrency B: %.2f\n", b);
}
void updateExchange(float *a, float *b) {
    float temp = *a;
    *a = *b;
    *b = temp;
}
int main() {
    float currencyA, currencyB;
    printf("Enter value of Currency A: ");
    scanf("%f", &currencyA);
    printf("Enter value of Currency B: ");
    scanf("%f", &currencyB);
    printf("\n--- Original Values ---");
    printf("\nCurrency A: %.2f", currencyA);
    printf("\nCurrency B: %.2f\n", currencyB);
    updateExchange(&currencyA, &currencyB);
    printf("\n--- After Actual Update (Call by Reference) ---");
    printf("\nCurrency A: %.2f", currencyA);
    printf("\nCurrency B: %.2f\n", currencyB);
}
