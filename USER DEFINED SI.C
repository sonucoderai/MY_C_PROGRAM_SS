#include <stdio.h>
int sicalculator(){
    int p,t,r,si;
    printf("enter the value of principle\n");
    scanf("%d",&p);
    printf("enter year\n");
    scanf("%d",&t);
    printf("enter interest\n");
    scanf("%d",&r);
    si=(p*t*r)/100;
    printf("si=%d\n",si);
;
}
   int main(){
       sicalculator();
   }
