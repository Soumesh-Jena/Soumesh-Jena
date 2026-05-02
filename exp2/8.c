//Implement a program to check if a substring exists within a string using strstr. 
#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello World";

    if(strstr(str, "World"))
        printf("Found");
    else
        printf("Not Found");

    return 0;
}
