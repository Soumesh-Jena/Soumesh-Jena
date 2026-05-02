//Write a program that accepts a string as a command-line argument and converts it to uppercase.
#include <stdio.h>
int main(int argc, char *argv[]) {
    int i, j;
    for(i = 1; i < argc; i++) {
        for(j = 0; argv[i][j] != '\0'; j++) {
            if(argv[i][j] >= 'a' && argv[i][j] <= 'z') {
                argv[i][j] -= 32;
            }
        }
        printf("%s ", argv[i]);
    }
    return 0;
} 

