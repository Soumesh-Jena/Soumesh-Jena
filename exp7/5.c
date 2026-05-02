//Implement a function to convert all lowercase characters in a string to uppercase using pointers. 
#include <stdio.h>

int main() {
    char str[] = "hello";
    char *p = str;

    while(*p) {
        if(*p >= 'a' && *p <= 'z') {
            *p = *p - 32;
        }
        p++;
    }

    printf("%s", str);

    return 0;
}
