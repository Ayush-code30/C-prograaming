#include <stdio.h>

int is_even(int num) {
    return num % 2 == 0;
}

int main() {
    int num;
    
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    if (is_even(num)) {
        printf("%d is an even number.\n", num);
    } else {
        printf("%d is an odd number.\n", num);
    }
    
    return 0;
}

