//Write a program to input an array of integers and print them using pointers. 
#include <stdio.h>

int main(){
    int a[5];
    int i;
    printf("enter the elements\n");
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    int *p=a;
    printf("the elements are\n");
    for(i=0;i<5;i++){
        printf("%d\n",*(p+i));
    }
    return 0;
}
