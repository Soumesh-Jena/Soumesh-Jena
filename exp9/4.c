//Write a function to sort an array of integers in ascending order using call by reference. 
#include <stdio.h>
void sort(int *arr, int n) {
    int i, j, temp;
    for(i = 0; i < n - 1; i++) {
        for(j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int main() {
    int arr[5] = {5, 2, 8, 1, 3};
    int i;
    sort(arr, 5);
    printf("Sorted array: ");
    for(i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
