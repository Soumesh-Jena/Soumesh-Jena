//Implement a program to append text to an existing text file.
#include <stdio.h>
int main() {
    FILE *fp;
    char text[100];
    fp = fopen("file.txt", "a");
    if (fp == NULL) {
        printf("File not found\n");
        return 1;
    }
    printf("Enter text to append: ");
    gets(text);
    fprintf(fp, "%s", text);
    fclose(fp);
    return 0;
}
