//Write a program to define a structure for a complex number (real and imaginary parts)waf to perform addition of two complex numbers.
#include <stdio.h>

struct complex {
    int real, imag;
};

struct complex add(struct complex c1, struct complex c2) {
    struct complex result;

    result.real = c1.real + c2.real;
    result.imag = c1.imag + c2.imag;

    return result;
}

int main() {
    struct complex c1, c2, sum;

    printf("Enter first complex (real imag): ");
    scanf("%d %d", &c1.real, &c1.imag);

    printf("Enter second complex (real imag): ");
    scanf("%d %d", &c2.real, &c2.imag);

    sum = add(c1, c2);

    printf("Sum = %d + %di", sum.real, sum.imag);

    return 0;
}
