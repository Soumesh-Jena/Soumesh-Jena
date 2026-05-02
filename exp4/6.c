//Write a program to define a structure for a book with title, author, and price. Input details for 10 books and display them. 
#include <stdio.h>
struct book {
    char title[30];
    char author[30];
    int price;
};
int main() {
    struct book b[3];   // you can make it 10
    for(int i = 0; i < 3; i++) {
        printf("Enter title, author, price: ");
        scanf("%s %s %d", b[i].title, b[i].author, &b[i].price);
    }
    for(int i = 0; i < 3; i++) {
        printf("%s %s %d\n", b[i].title, b[i].author, b[i].price);
    }
    return 0;
}
