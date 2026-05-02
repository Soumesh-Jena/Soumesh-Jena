//Demonstrate: How do you declare a bit-field to store a value that ranges from 0 to 15? 
#include <stdio.h>

struct data {
    unsigned int x : 4;   // 4 bits ? range 0–15
};

int main() {
    struct data d;
    d.x = 10;

    printf("Value = %d", d.x);
    return 0;
}

