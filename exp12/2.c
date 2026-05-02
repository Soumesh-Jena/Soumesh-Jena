//Create a program to calculate the sum of integers passed as command-line arguments. 
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
    int i, sum = 0;
    for(i = 1; i < argc; i++) {
        sum += atoi(argv[i]);
    }
    printf("Sum = %d", sum);
    return 0;
}
