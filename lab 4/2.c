#include <stdio.h>
#include <string.h>

int main() {
	char s[30];
	int i=0;
	printf("enter the string:");
	gets(s);
	while(s[i]!='\0') {
		printf("%c\n",s[i]);
		i++;
	}
	return 0;
}
