//Create a program to calculate the transpose of a matrix using call by reference.
#include <stdio.h>
void transpose(int mat[3][3]) {
    int i, j, temp;
    for(i = 0; i < 3; i++) {
        for(j = i + 1; j < 3; j++) {
            temp = mat[i][j];
            mat[i][j] = mat[j][i];
            mat[j][i] = temp;
        }
    }
}
int main() {
    int mat[3][3], i, j;
    printf("Enter 3x3 matrix:\n");
    for(i = 0; i < 3; i++)
        for(j = 0; j < 3; j++)
            scanf("%d", &mat[i][j]);
    transpose(mat);
    printf("Transpose:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++)
            printf("%d ", mat[i][j]);
        printf("\n");
    }
    return 0;
}
