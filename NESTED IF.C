#include <stdio.h>
int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    if (number > 0) {  
        printf("The number is positive.\n");
    if (number % 2 == 0) {   // Inner if
            printf("It is also even.\n");
        } else {
            printf("It is also odd.\n");
        }

    } else {
        printf("The number is not positive.\n");
    }

    return 0;
}
