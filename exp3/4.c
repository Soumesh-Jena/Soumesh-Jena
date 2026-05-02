//Create a nested structure to store a student’s details (name, roll number, and address where address is another structure). 
#include <stdio.h>

struct address {
    char city[20];
};

struct student {
    char name[20];
    int roll;
    struct address add;
};

int main() {
    struct student s;

    printf("Enter name roll city: ");
    scanf("%s %d %s", s.name, &s.roll, s.add.city);

    printf("Name=%s Roll=%d City=%s", s.name, s.roll, s.add.city);

    return 0;
}
