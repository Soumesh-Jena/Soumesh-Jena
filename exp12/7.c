//Create a program that demonstrates the use of #include to import custom header files.
#include <stdio.h>
#include "myfile.h"
int main() {
    display();
    return 0;
}
void display() {
    printf("Hello from header file");
}
