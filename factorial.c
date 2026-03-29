// FACTORIAL PROGRAM USING RECURSION
#include <stdio.h>

int fact(int x){
    if (x==0){
        return 1;
    }
    else{
        return x*fact(x-1);
    }
}

int main(){
    printf("the factorial is %d\n", fact(5));
    return 0;
}
