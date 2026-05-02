//Write a program demonstrating pointer arithmetic with a double array. Show how to iterate through the array using a pointer.
#include <stdio.h>
int main() {
    double arr[3] = {1.1, 2.2, 3.3};
    double *p = arr;
    for(int i = 0; i < 3; i++) {
        printf("%.1lf ", *(p+i));
    }
    return 0;
} 
