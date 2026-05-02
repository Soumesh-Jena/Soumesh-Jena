//How would you use a pointer to change the value of a variable of type long? Create a program to showcase this concept.
#include <stdio.h>
int main() {
    long x = 100;
    long *p = &x;
    *p = 200;
    printf("Value = %ld", x);
    return 0;
} 
