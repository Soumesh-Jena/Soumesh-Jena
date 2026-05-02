//Write a program to compare two strings using strcmp. 
#include <stdio.h>
#include <string.h>

int main() {
    char s1[] = "abc";
    char s2[] = "abc";

    if(strcmp(s1, s2) == 0)
        printf("Equal");
    else
        printf("Not Equal");

    return 0;
}
