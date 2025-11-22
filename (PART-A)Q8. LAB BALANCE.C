#include <stdio.h>
void swap(float *x, float *y) {
    float temp = *x;
    *x = *y;
    *y = temp;
}
    int main() {
    float a, b;
    printf("Enter first balance: ");
    scanf("%f", &a);
    printf("Enter second balance: ");
    scanf("%f", &b);
    printf("\nBefore swap: a = %.2f, b = %.2f\n", a, b);
    swap(&a, &b);  
    printf("After swap:  a = %.2f, b = %.2f\n", a, b);
}
