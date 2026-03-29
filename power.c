// POWER PROGRAM USING RECURSION
#include <stdio.h>
int power(int x,int y){
    if (y==0){
        return 1;
    }
    else{
        return x*power(x,y-1);
    }
}
int main(){
    int a,b;
    printf("enter the number\n");
    scanf("%d",&a);
    printf("enter the power of the number\n");
    scanf("%d",&b);
    printf("the power of %d^%d is %d\n",a,b,power(a,b));
    return 0;
}
