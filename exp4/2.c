//Write a program to use enumeration to represent days of the week. 
#include <stdio.h>

enum days {SUN, MON, TUE, WED, THU, FRI, SAT};

int main() {
    enum days d = WED;

    printf("Day value = %d", d);  // WED = 3
    return 0;
}
