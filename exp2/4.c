//Write a program to copy one string to another using strcpy.
#include <stdio.h>
#include <string.h>

int main() {
    char s1[] = "C Language";
    char s2[50];

    strcpy(s2, s1);

    printf("%s", s2);

    return 0;
}
