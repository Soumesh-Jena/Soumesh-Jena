/*Write a program to create a pointer to an integer variable and demonstrate how
the pointer can modify the value of the variable*/
#include <stdio.h>

int main(){
	int a=5;
	int *ip=&a;
	printf("%d\n",a); //value before
	*ip=6;
	printf("%d\n",a); //value after
	return 0;
}
