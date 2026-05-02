//Write a program to create a structure named Complex and define a function incrComplex() to increment the value of both real and imaginary members by 1. 
#include <stdio.h>
struct Complex {
    int real, imag;
};
void incrComplex(struct Complex *c) {
    c->real++;
    c->imag++;
}
int main() {
    struct Complex c;
    printf("Enter real and imaginary: ");
    scanf("%d %d", &c.real, &c.imag);
    incrComplex(&c);
    printf("After increment: %d + %di", c.real, c.imag);
    return 0;
}
