//Implement a function to compare two strings using pointers. 
#include <stdio.h>
int cmp(char *a,char *b){
	int i;
	for(i=0;*(a+i)!=NULL||*(b+i)!=NULL;i++){
		
		if(*(a+i)-*(b+i)==0){
			continue;
		}
		else{
			return *(a+i)-*(b+i);
		}
	}
}
int main(){
	char c[4]="abc";
	char d[4]="abc";
	if(cmp(&c,&d)){
		printf("strings are not equal");
	}
	else{
		printf("strings are equal");
	}

	return 0;
}

	
