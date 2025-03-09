#include <stdio.h>

int main() {
    float height, width, perimeter;
    
   
    printf("Enter height of the rectangle: ");
    scanf("%f", &height);
    
    printf("Enter width of the rectangle: ");
    scanf("%f", &width);
    
    
    perimeter = 2 * (height + width);
    
    printf("Perimeter of the rectangle: %.2f\n", perimeter);
    
    return 0;
}

