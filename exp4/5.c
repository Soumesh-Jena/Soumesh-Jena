//How can you initialize an array of structures? Show an example. 
#include <stdio.h>
struct student {
    int id;
    char name[20];
};
int main() {
    struct student s[2] = {
        {1, "Ram"},
        {2, "Shyam"}
    };
    for(int i = 0; i < 2; i++) {
        printf("%d %s\n", s[i].id, s[i].name);
    }
    return 0;
}
