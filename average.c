#include <stdio.h>

int main() {
    int count = 0;
    double num, sum = 0, average;
    char choice;
    
    printf("Enter numbers to calculate average (enter 'q' to stop):\n");
    
    while (1) {
        if (scanf("%lf", &num) != 1) {
            break; 
        }
        sum += num;
        count++;
    }
    
    if (count > 0) {
        average = sum / count;
        printf("Average: %.2lf\n", average);
    } else {
        printf("No numbers were entered.\n");
    }
    
    return 0;
}

