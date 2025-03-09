#include <stdio.h>

int main() {
    int num, sum = 0;
    
    printf("Enter integers (enter 0 to stop):\n");
    
    do {
        scanf("%d", &num);
        if (num > 0) {
            sum += num;
        }
    } while (num != 0);
    
    printf("Sum of positive integers: %d\n", sum);
    
    return 0;
}

