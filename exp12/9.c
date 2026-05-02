// Implement a macro to determine the maximum of two numbers. 
#include <stdio.h>
#define MAX(a,b) (a>b?a:b)
int main() {
    int x = 10, y = 20;
    printf("Max = %d", MAX(x,y));
    return 0;
}
