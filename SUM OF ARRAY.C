#include<stdio.h>
int main(){
    int n,sum=0;
    printf("Enter element\n");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
    printf("enter the value of element\n");
    scanf("%d",&arr[i]);
    sum = sum+arr[i];
    printf("sum=%d\n",sum);
    }
}
