#include <stdio.h>

int square(int num) {
    return num * num;
}

int main() {
    int num;
    
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    printf("The square of %d is %d.\n", num, square(num));
    
    return 0;
}

