//Develop a program to convert a string to uppercase using strupr. 
#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "hello";

    strupr(str);

    printf("%s", str);

    return 0;
}
