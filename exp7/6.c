//Write a program to find the frequency of a given character in a string using pointers.
#include <stdio.h>

int main() {
    char str[] = "hello";
    char *p = str;
    char ch = 'l';
    int count = 0;

    while(*p) {
        if(*p == ch)
            count++;
        p++;
    }

    printf("Frequency = %d", count);

    return 0;
} 

