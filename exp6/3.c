//Write a program to reverse the elements of an array in-place using pointers.
#include <stdio.h>

int main() {
    int a[5] = {10, 20, 30, 40, 50};

    int *start = a;          // pointer to first element
    int *end = a + 4;    // pointer to last element

    while (start < end) {
        int temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }

    printf("Reversed array: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
