//Write a program to shift each character in a string by a given number (Caesar Cipher) using pointers. 
#include <stdio.h>

int main() {
    char str[] = "abc";
    char *p = str;
    int shift = 2;

    while(*p) {
        *p = *p + shift;
        p++;
    }

    printf("Encrypted = %s", str);

    return 0;
}
