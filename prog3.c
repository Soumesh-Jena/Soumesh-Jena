#include <stdio.h>

void capitalize(char s[]) {
    int i;
    for (i = 0; s[i] != '\0'; i++) {
        if (i == 0 || s[i - 1] == ' ') {
            if (s[i] >= 'a' && s[i] <= 'z') {
                s[i] = s[i] - 32;
            }
        }
    }
}

int main() {
    char s[100];

    printf("Enter a sentence: ");
    gets(s); 

    capitalize(s);

    printf("Your sentence with all first letters capitalized:\n%s", s);

    return 0;
}

