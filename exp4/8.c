//Write a program to define a structure for a student containing fields for name, roll number, and marks. Input the details of 10 students and display the details of the student who has secured highest mark.
#include <stdio.h>
struct student {
    char name[20];
    int roll, marks;
};
int main() {
    struct student s[3];
    int max = 0;
    for(int i = 0; i < 3; i++) {
        printf("Enter name roll marks: ");
        scanf("%s %d %d", s[i].name, &s[i].roll, &s[i].marks);
    }
    for(int i = 1; i < 3; i++) {
        if(s[i].marks > s[max].marks) {
            max = i;
        }
    }
    printf("\nTopper: %s %d %d",
           s[max].name, s[max].roll, s[max].marks);
    return 0;
}
