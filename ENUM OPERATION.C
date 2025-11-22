#include <stdio.h>
enum Operation {
    ADD = 1,
    SUBTRACT,
    MULTIPLY,
    DIVIDE
};
    int main() {
    enum Operation op;
    printf("Enter operation (1-4): ");
    scanf("%d", &op);
    if (op == ADD)
    printf("You chose Addition");
    else if (op == SUBTRACT)
    printf("You chose Subtraction");
    else
    printf("Other operation"); 
}
