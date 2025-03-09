#include <stdio.h>

#define MAX_NUMBERS 100

int main() {
    int numbers[MAX_NUMBERS];
    int count = 0, num, i, duplicate_found = 0;
    
    printf("Enter numbers (enter a duplicate to stop):\n");
    
    while (!duplicate_found) {
        scanf("%d", &num);
        
        for (i = 0; i < count; i++) {
            if (numbers[i] == num) {
                duplicate_found = 1;
                break;
            }
        }
        
        if (!duplicate_found) {
            numbers[count] = num;
            count++;
        }
    }
    
    printf("Duplicate number %d found. Stopping input.\n", num);
    
    return 0;
}

