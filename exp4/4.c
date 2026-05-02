//Can a union contain a bit-field? Demonstrate with an example. 
#include <stdio.h>
union test {
    struct {
        unsigned int a : 2;
        unsigned int b : 2;
    } bits;
};
int main() {
    union test t;
    t.bits.a = 2;
    t.bits.b = 3;
    printf("a=%d b=%d", t.bits.a, t.bits.b);
    return 0;
}
