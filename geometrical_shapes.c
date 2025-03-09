#include <stdio.h>

int main() {
    int choice;
    double length, breadth, radius, base, height, area;
    const double PI = 3.14159;
    
    
    printf("Menu:\n");
    printf("1. Area of Rectangle\n");
    printf("2. Area of Circle\n");
    printf("3. Area of Triangle\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);
    
    
    switch (choice) {
        case 1:
            printf("Enter length and breadth of the rectangle: ");
            scanf("%lf %lf", &length, &breadth);
            area = length * breadth;
            printf("Area of Rectangle: %.2lf\n", area);
            break;
        case 2:
            printf("Enter radius of the circle: ");
            scanf("%lf", &radius);
            area = PI * radius * radius;
            printf("Area of Circle: %.2lf\n", area);
            break;
        case 3:
            printf("Enter base and height of the triangle: ");
            scanf("%lf %lf", &base, &height);
            area = 0.5 * base * height;
            printf("Area of Triangle: %.2lf\n", area);
            break;
        default:
            printf("Invalid choice! Please enter a number between 1 and 3.\n");
    }
    
    return 0;
}

