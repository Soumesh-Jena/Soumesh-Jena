//Write a program to rotate the elements of an array to the left by one position using pointers.
 #include <stdio.h>
int main() {
    int arr[5] = {1,2,3,4,5};
    int *p = arr;
    int first = *p;
    for(int i = 0; i < 4; i++) {
        *(p+i) = *(p+i+1);
    }
    *(p+4) = first;
    for(int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
