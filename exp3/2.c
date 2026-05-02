//How can you define a structure to store a date (day, month, year) and display it in the format DD/MM/YYYY? 
#include <stdio.h>

struct date {
    int day, month, year;
};

int main() {
    struct date d;

    printf("Enter day month year: ");
    scanf("%d %d %d", &d.day, &d.month, &d.year);

    printf("Date = %02d/%02d/%d", d.day, d.month, d.year);

    return 0;
}
