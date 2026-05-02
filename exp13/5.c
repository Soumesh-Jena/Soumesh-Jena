//Create a program to copy the content of one text file into another. 
#include <stdio.h>
int main() {
    FILE *src, *dest;
    char ch;
    src = fopen("source.txt", "r");
    dest = fopen("dest.txt", "w");
    if (src == NULL || dest == NULL) {
        printf("Error opening files\n");
        return 1;
    }
    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
    }
    printf("File copied successfully\n");
    fclose(src);
    fclose(dest);
    return 0;
}
