//Write a program to demonstrate the use of substr()function. 
#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello";
    char sub[10];

    strncpy(sub, str+1, 3);
    sub[3] = '\0';

    printf("Substring = %s", sub);

    return 0;
}
