//Write a program that passes an integer variable by reference to a function using a pointer. Modify the value in the function and print it in the main program.
#include <stdio.h>
void change(int *n) {
    *n = *n + 10;
}
int main() {
    int x = 5;
    change(&x);
    printf("Value = %d", x);
    return 0;
} 
