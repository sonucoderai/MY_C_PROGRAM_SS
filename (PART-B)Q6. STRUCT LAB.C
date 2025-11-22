#include <stdio.h>
struct Book {
    char title[20];
    char author[20];
    int year;
};
int main() {
    struct Book b1, b2;
    printf("Enter first book title: ");
    scanf("%s", b1.title);
    printf("Enter first book author: ");
    scanf("%s", b1.author);
    printf("Enter first book year: ");
    scanf("%d", &b1.year);
    printf("\nEnter second book title: ");
    scanf("%s", b2.title);
    printf("Enter second book author: ");
    scanf("%s", b2.author);
    printf("Enter second book year: ");
    scanf("%d", &b2.year);
    printf("\n--- Book List ---\n");
    printf("\nBook 1: %s, %s, %d", b1.title, b1.author, b1.year);
    printf("\nBook 2: %s, %s, %d", b2.title, b2.author, b2.year);
}
