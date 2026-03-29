//Write a program to calculate the length of a string using pointers. 
#include <stdio.h>

int main() {
    char str[] = "Hello";
    char *p = str;
    int len = 0;

    while (*p != '\0') {
        len++;
        p++;
    }

    printf("Length = %d", len);
    return 0;
}
