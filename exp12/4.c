//Create a program to count the number of command-line arguments passed. 
#include <stdio.h>
int main(int argc, char *argv[]) {
    printf("Total arguments = %d", argc - 1);
    return 0;
}
