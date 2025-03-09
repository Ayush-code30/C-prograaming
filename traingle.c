#include <stdio.h>

int main() {
    int angle1, angle2, angle3;
    
    
    printf("Enter first angle of the triangle: ");
    scanf("%d", &angle1);
    
    printf("Enter second angle of the triangle: ");
    scanf("%d", &angle2);
    
    printf("Enter third angle of the triangle: ");
    scanf("%d", &angle3);
    
  
    if (angle1 + angle2 + angle3 == 180) {
        printf("The given angles form a valid triangle.\n");
    } else {
        printf("The given angles do not form a valid triangle.\n");
    }
    
    return 0;
}

