#include<stdio.h>
int largest(int a,int b,int c){
    if (a>=b && a>=c)
    printf("a is largest");
    if (b>=a && b>=c)
    printf("b is largest");
    return c;
}
int main(){
   int result= largest(1,2,3);
   printf("%d\n",result);
} 
