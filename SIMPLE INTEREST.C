2.SIMPLE INTEREST;
#include <stdio.h>
int main() 
{
    float p, r, t, si;
    printf("Enter Principle amount: ");
    scanf("%f", &p);
    printf("Enter rate of interest: ");
    scanf("%f", &r);
    printf("Enter Time (in years): ");
    scanf("%f", &t);
    si = (p*r*t) / 100;
    printf("simple interest = %2f\n",si);
    return 0;
}
