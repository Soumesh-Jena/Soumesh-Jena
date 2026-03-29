//Implement a function to count the number of vowels in a string using pointers. 

#include <string.h>
#include <stdio.h>

int vwl_count(char *p){
	int i,count=0;
	for(i=0;*(p+i)!=NULL;i++){
		if(*(p+i)=='a' || *(p+i)=='e' || *(p+i)=='i' || *(p+i)=='o' || *(p+i)=='u'){
			count++;
		}
		else if(*(p+i)=='A' || *(p+i)=='E' || *(p+i)=='I' || *(p+i)=='O' || *(p+i)=='U'){
			count++;
		}
	}
	return count;
}
int main(){
	char s[10]="xjhatyaed";
	printf("the total vowels are %d\n",vwl_count(&s));
	return 0;
}
