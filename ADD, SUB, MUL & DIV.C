#include <stdio.h>
int main() 
{
    int choice;
    float a, b, result;
    printf("Simple Calculator\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);
    if (choice == 1) {
        result = a + b;
        printf("Result = %.2f\n", result);
    }
    else if (choice == 2) {
        result = a - b;
        printf("Result = %.2f\n", result);
    }
    else if (choice == 3) {
        result = a * b;
        printf("Result = %.2f\n", result);
    }
    else if (choice == 4) {
        if (b != 0)
            result = a / b;
        else {
            printf("Error! Division by zero.\n");
            return 0;
        }
        printf("Result = %.2f\n", result);
    }
    else
    {
        printf("Invalid choice!\n");
    }
    return 0;
}
