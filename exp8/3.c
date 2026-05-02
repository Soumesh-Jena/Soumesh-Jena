//Define a function swapDistance() for the structure defined in question no.2, to swap the content of two Distance variables. 
#include <stdio.h>
struct Distance {
    int km, m, cm;
};
void swapDistance(struct Distance *a, struct Distance *b) {
    struct Distance temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main() {
    struct Distance d1 = {1, 200, 30};
    struct Distance d2 = {2, 100, 50};
    swapDistance(&d1, &d2);
    printf("After Swap:\n");
    printf("D1 = %d km %d m %d cm\n", d1.km, d1.m, d1.cm);
    printf("D2 = %d km %d m %d cm\n", d2.km, d2.m, d2.cm);
    return 0;
}
