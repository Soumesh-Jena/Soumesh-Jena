//Develop a program to count occurrences of a specific character in a string. 
#include <stdio.h>

int main() {
    char str[100], ch;
    int i, count = 0;

    printf("Enter string: ");
    scanf("%s", str);

    printf("Enter character: ");
    scanf(" %c", &ch);

    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] == ch)
            count++;
    }

    printf("Count = %d", count);

    return 0;
}
