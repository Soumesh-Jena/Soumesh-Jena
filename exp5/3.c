/*Create a program to illustrate the use of pointers with character variables.
Include both reading and printing the character via the pointer.*/

#include <stdio.h>

int main(){
	char c='d';
	char *pr=&c; //reading the char variable
	printf("%c\n",*pr); //printing the pointer
	return 0;
}

