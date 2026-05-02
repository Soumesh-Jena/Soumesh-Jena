//Create structure to store details of book. Store and print the details of 5 books using pointer. 
#include <stdio.h>
struct Book {
    char name[50];
    int price;
};
int main() {
    struct Book b[5];
    int i;
    for(i = 0; i < 5; i++) {
        printf("Enter name and price: ");
        scanf("%s %d", b[i].name, &b[i].price);
    }
    printf("\nBook Details:\n");
    for(i = 0; i < 5; i++) {
        printf("%s - %d\n", b[i].name, b[i].price);
    }
    return 0;
}
