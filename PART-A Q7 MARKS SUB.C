#include <stdio.h>
int main() {
    int m1, m2, m3;
    float avg;
    printf("Enter marks of three subject: ");
    scanf("%d %d %d", &m1, &m2, &m3);
    avg = (m1 + m2+ m3) / 3.0;
    printf("Average = %.2f\n",avg);
     if (m1, m2, m3>40)
    printf("Result: passed\n");
    else
    printf("Result: failed\n");
}
   
