//Demonstrate the use of bit fields with structure to store specific information compactly (e.g., flags or settings).
#include <stdio.h>

struct flags {
    unsigned int a : 1;
    unsigned int b : 1;
};

int main() {
    struct flags f;

    f.a = 1;
    f.b = 0;

    printf("a=%d b=%d", f.a, f.b);

    return 0;
}
