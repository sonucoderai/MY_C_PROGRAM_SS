#include <stdio.h>
#include <string.h>
int main() {
    char id[30];
    char stored1[] = "ABCDE1234F";      
    char stored2[] = "123456789012";    
    char stored3[] = "APAR2025ID";      
    char stored4[] = "DL12345";     
    char stored5[] = "P1234567";
    printf("Enter your ID: ");
    scanf("%s", id);
    if(strcmp(id, stored1) == 0)
        printf("Verified\n");
    else if(strcmp(id, stored2) == 0)
        printf("Verified\n");
    else if(strcmp(id, stored3) == 0)
        printf("Verified\n");
    else if(strcmp(id, stored4) == 0)
        printf("Verified\n");
    else if(strcmp(id, stored5) == 0)
        printf("Verified\n");
    else
        printf("Not Verified\n");
}
