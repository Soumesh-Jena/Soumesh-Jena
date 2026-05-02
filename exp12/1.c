//Write a program to print all command-line arguments passed to the program. 
#include <stdio.h>
int main(int argc, char *argv[]) {
    int i;
    for(i = 0; i < argc; i++) {
        printf("%s\n", argv[i]);
    }
    return 0;
}
