//Write a program to define a structure for a car (make, model, and year) and use nested structures to include the owner's details.
#include <stdio.h>

struct owner {
    char name[20];
};

struct car {
    char model[20];
    int year;
    struct owner o;
};

int main() {
    struct car c;

    printf("Enter model year owner: ");
    scanf("%s %d %s", c.model, &c.year, c.o.name);

    printf("Model=%s Year=%d Owner=%s",
           c.model, c.year, c.o.name);

    return 0;
}
