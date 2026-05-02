//Develop a program to concatenate two strings using strcat. 
#include <stdio.h>
#include <string.h>

int main() {
    char s1[50] = "Hello ";
    char s2[] = "World";

    strcat(s1, s2);

    printf("%s", s1);
    return 0;
}
