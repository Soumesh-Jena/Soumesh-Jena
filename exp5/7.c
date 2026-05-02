//Create a program where a pointer to a pointer (e.g., **p) is used to access and modify a variable of type short.
#include <stdio.h>
int main() {
    short x = 10;
    short *p = &x;
    short **pp = &p;
    **pp = 20;
    printf("Value = %d", x);
    return 0;
} 
