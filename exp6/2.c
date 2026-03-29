//Implement a function to find the largest element in an array using pointers. 
#include <stdio.h>

int large(int *p){
    int large=0;
    for(int i=0;i<5;i++){
        if(*(p+i)>large){
            large=*(p+i);
        }
    }
    return large;
}

int main(){
    int a[5];
    printf("enter the elements\n");
    for(int i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    printf("the largest element is-");
    printf("%d\n",large(a));
    return 0;
}
