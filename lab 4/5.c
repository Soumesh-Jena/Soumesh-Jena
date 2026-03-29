#include <stdio.h>
#include <string.h>

int main(){
	char test[30];
	printf("enter a sentence-");
	gets(test);
	int bs=0;
	int i=0;
	while(test[i]!='\0'){
	if (test[i]==32){
		bs++;
		}
	i++;
	}
	int wrds;
	wrds=bs+1;
	printf("the total words in the sentence are-%d",wrds);
	return 0;
}
