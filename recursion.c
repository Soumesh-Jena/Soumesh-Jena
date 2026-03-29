//PRINT ALL EVEN NUMBERS FROM 1 TO N USING RECURSION
#include <stdio.h>
int even(int x,int y){
    if (x>y){
        printf("end of series\n");
    }
    else{
        if (x%2==0){
            printf("%d\n",x);
        }
        return even(x+1,y);
    }
}
int main(){
    int a,n;
    printf("enter the first number\n");
    scanf("%d",&a);
    printf("enter the last number\n");
    scanf("%d",&n);
    printf("The even numbers are:\n");
    even(a,n);
    return 0;
}
