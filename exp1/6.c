//Write a program to replace spaces in a string with hyphens.
#include <stdio.h>

int main() {
    char str[100];
    int i;

    printf("Enter sentence: ");
    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] == ' ')
            str[i] = '-';
    }

    printf("Result: %s", str);

    return 0;
}
