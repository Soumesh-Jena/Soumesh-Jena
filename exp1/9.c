//Develop a program to merge two strings alternately (e.g., "abc" and "123" ? "a1b2c3").
 #include <stdio.h>

int main() {
    char s1[50], s2[50], result[100];
    int i = 0, j = 0, k = 0;

    printf("Enter first string: ");
    scanf("%s", s1);

    printf("Enter second string: ");
    scanf("%s", s2);

    while(s1[i] != '\0' || s2[j] != '\0') {
        if(s1[i] != '\0')
            result[k++] = s1[i++];
        if(s2[j] != '\0')
            result[k++] = s2[j++];
    }

    result[k] = '\0';

    printf("Merged string = %s", result);

    return 0;
}
