//Write a program to reverse a string using call by reference. 
#include <stdio.h>
#include <string.h>
void reverse(char *str) {
    int i, j;
    char temp;
    int len = strlen(str);
    for(i = 0, j = len - 1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}
int main() {
    char str[100];
    printf("Enter string: ");
    scanf("%s", str);
    reverse(str);
    printf("Reversed: %s", str);
    return 0;
}
