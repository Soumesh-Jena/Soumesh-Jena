//Implement a function to count the number of words in a string using pointers. 
#include <stdio.h>

int main() {
    char str[] = "Hello world program";
    char *p = str;
    int count = 1;

    while(*p) {
        if(*p == ' ')
            count++;
        p++;
    }

    printf("Words = %d", count);

    return 0;
}
