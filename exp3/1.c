//Write a program to define a structure for a student containing fields for name, roll number, and marks. Input and display the details. 
#include <stdio.h>

struct student {
    char name[20];
    int roll;
    float marks;
};

int main() {
    struct student s;

    printf("Enter name roll marks: ");
    scanf("%s %d %f", s.name, &s.roll, &s.marks);

    printf("Name=%s Roll=%d Marks=%.2f", s.name, s.roll, s.marks);

    return 0;
}
