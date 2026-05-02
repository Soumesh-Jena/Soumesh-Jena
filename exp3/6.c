//Demonstrate: How to use typedef with structures to simplify code readability? 
#include <stdio.h>

typedef struct {
    int id;
    char name[20];
} student;

int main() {
    student s = {1, "Ram"};

    printf("ID=%d Name=%s", s.id, s.name);

    return 0;
}
