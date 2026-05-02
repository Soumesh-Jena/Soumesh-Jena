//Write a C program that uses an enumeration to implement a menu-driven application.
#include <stdio.h>
enum menu {ADD = 1, SUB, EXIT};
int main() {
    int a = 10, b = 5, choice;
    while(1) {
        printf("\n1.ADD\n2.SUB\n3.EXIT\n");
        scanf("%d", &choice);
        if(choice == ADD)
            printf("Sum = %d", a + b);
        else if(choice == SUB)
            printf("Sub = %d", a - b);
        else
            break;
    }

    return 0;
} 

