//Write a program to define a structure within another structure to store details of an employee (name, ID, salary and department details). Store the details of 10employees and sort them according to the salary. 
#include <stdio.h>
struct dept {
    char dname[20];
};
struct emp {
    char name[20];
    int id, salary;
    struct dept d;
};
int main() {
    struct emp e[3], temp;
    for(int i = 0; i < 3; i++) {
        printf("Enter name id salary dept: ");
        scanf("%s %d %d %s", e[i].name, &e[i].id, &e[i].salary, e[i].d.dname);
    }
    for(int i = 0; i < 3; i++) {
        for(int j = i+1; j < 3; j++) {
            if(e[i].salary > e[j].salary) {
                temp = e[i];
                e[i] = e[j];
                e[j] = temp;
            }
        }
    }
    printf("\nSorted by salary:\n");
    for(int i = 0; i < 3; i++) {
        printf("%s %d %d %s\n", e[i].name, e[i].id, e[i].salary, e[i].d.dname);
    }
    return 0;
}
