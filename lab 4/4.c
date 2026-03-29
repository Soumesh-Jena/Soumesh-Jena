#include<stdio.h>
#include<string.h>

int main(){
	char s[34];
	int i,j=0;
	printf("enter the string:");
	gets(s);
	for(i=0;s[i]!='\0';i++){
		if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
			j++;
		}
		else if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U'){
			j++;
		}
	}
	printf("the total vowels are: %d",j);
	return 0;
}
