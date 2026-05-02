//Write a program to find the frequency of a given element in an array using pointers.
#include <stdio.h>
int main() {
    int arr[5] = {1,2,2,3,2};
    int *p = arr, count = 0, key = 2;
    for(int i = 0; i < 5; i++) {
        if(*(p+i) == key)
            count++;
    }
    printf("Frequency = %d", count);
    return 0;
} 
