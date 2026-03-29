#include <stdio.h>

int main(){
	char test[20]="Devidutt Mishra";
	int i=0;
	while(test[i]!='\0'){
		i++;
	}
	printf("the length of the string is %d\n",i);
}
