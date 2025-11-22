#include <stdio.h>
int main() {
    int units[2][3] = {
        {10, 20, 30},   
        {15, 25, 35}   
    }; 
        float revenue[3] = {5.0, 10.0, 8.0};
        float total1 = 0, total2 = 0; 
        for (int i = 0; i < 3; i++) {
        total1 += units[0][i] * revenue[i];
    }
       for (int i = 0; i < 3; i++) {
        total2 += units[1][i] * revenue[i];
    }
    printf("Total revenue of Branch 1 = %.2f\n", total1);
    printf("Total revenue of Branch 2 = %.2f\n", total2);
}

   
