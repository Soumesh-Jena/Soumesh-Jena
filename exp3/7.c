//Write a program to store details of multiple employees and count the number of employees in a specific department using nested structures. 
#include <stdio.h>

struct dept {
    char name[20];
};

struct emp {
    char name[20];
    struct dept d;
};

int main() {
    struct emp e[3];
    int count = 0;

    for(int i = 0; i < 3; i++) {
        printf("Enter emp name and dept: ");
        scanf("%s %s", e[i].name, e[i].d.name);
    }

    for(int i = 0; i < 3; i++) {
        if(strcmp(e[i].d.name, "IT") == 0) {
            count++;
        }
    }

    printf("Employees in IT = %d", count);

    return 0;
}
