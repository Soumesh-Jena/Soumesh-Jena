//How can you write a program to find the longest word in a sentence?
#include <stdio.h>
#include <string.h>

int main() {
    char str[100], word[20], max[20];
    int i, j = 0, maxlen = 0;

    printf("Enter sentence: ");
    fgets(str, sizeof(str), stdin);

    for(i = 0; ; i++) {
        if(str[i] != ' ' && str[i] != '\0' && str[i] != '\n') {
            word[j++] = str[i];
        } else {
            word[j] = '\0';
            if(j > maxlen) {
                maxlen = j;
                strcpy(max, word);
            }
            j = 0;
        }
        if(str[i] == '\0')
            break;
    }

    printf("Longest word = %s", max);

    return 0;
}
