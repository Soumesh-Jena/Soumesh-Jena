//Write a program to copy one string to another using pointer. 
#include <stdio.h>

int main() {
    char str1[] = "Hello";
    char str2[20];
    char *p1 = str1, *p2 = str2;

    while (*p1 != '\0') {
        *p2 = *p1;
        p1++;
        p2++;
    }
    *p2 = '\0';

    printf("Copied string: %s", str2);
    return 0;
}
