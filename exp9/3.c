//Create a program to convert all characters of a string to uppercase using call by reference. 
#include <stdio.h>
void toUpper(char *str) {
    int i;
    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
    }
}
int main() {
    char str[100];
    printf("Enter string: ");
    scanf("%s", str);
    toUpper(str);
    printf("Uppercase: %s", str);
    return 0;
}
