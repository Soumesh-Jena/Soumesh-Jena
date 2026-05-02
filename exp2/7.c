//Write a program to convert a string to lowercase using strlwr. 
#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "HELLO";

    strlwr(str);

    printf("%s", str);

    return 0;
}
