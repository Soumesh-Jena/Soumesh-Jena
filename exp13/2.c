//Write a program to count the number of lines, words, and characters in a given text file. 
#include <stdio.h>
#include <ctype.h>
int main() {
    FILE *fp;
    char ch;
    int lines = 0, words = 0, chars = 0;
    fp = fopen("file.txt", "r");
    if (fp == NULL) {
        printf("File not found\n");
        return 1;
    }
    while ((ch = fgetc(fp)) != EOF) {
        chars++;
        if (ch == '\n')
            lines++;
        if (isspace(ch))
            words++;
    }
    printf("Lines: %d\nWords: %d\nCharacters: %d\n", lines, words, chars);
    fclose(fp);
    return 0;
}

