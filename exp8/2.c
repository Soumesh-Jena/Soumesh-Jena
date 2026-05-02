//Define a structure Distance to store distance in kilometer, meter & centimeter. Create an array of Distance type to store 5 Distance variables. Find the longest distance using pointers. 
#include <stdio.h>
struct Distance {
    int km, m, cm;
};
int toCM(struct Distance d) {
    return d.km * 100000 + d.m * 100 + d.cm;
}
int main() {
    struct Distance d[5];
    int i, max = 0;
    for(i = 0; i < 5; i++) {
        printf("Enter km m cm: ");
        scanf("%d %d %d", &d[i].km, &d[i].m, &d[i].cm);
    }
    for(i = 1; i < 5; i++) {
        if(toCM(d[i]) > toCM(d[max])) {
            max = i;
        }
    }
    printf("Longest Distance = %d km %d m %d cm",
           d[max].km, d[max].m, d[max].cm);
    return 0;
}
