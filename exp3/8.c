//Develop a program to create a structure for a 2D point and use it to calculate the distance between two points. 
#include <stdio.h>
#include <math.h>

struct point {
    int x, y;
};

int main() {
    struct point p1, p2;
    float dist;

    printf("Enter x1 y1: ");
    scanf("%d %d", &p1.x, &p1.y);

    printf("Enter x2 y2: ");
    scanf("%d %d", &p2.x, &p2.y);

    dist = sqrt((p2.x - p1.x)*(p2.x - p1.x) +
                (p2.y - p1.y)*(p2.y - p1.y));

    printf("Distance = %.2f", dist);

    return 0;
}
