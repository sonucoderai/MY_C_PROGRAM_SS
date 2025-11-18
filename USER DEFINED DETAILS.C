#include <stdio.h>
int userdetails(){
    char name,dept;
    int age;
    printf("enter your name\n");
    scanf("%s",&name);
    printf("enter your age\n");
    scanf("%d",&age);
    printf("enter your dept\n");
    scanf("%s",&dept);
}
   int main(){
       userdetails();
   }
