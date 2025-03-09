#include <stdio.h>


int power(int base, int exp) {
    int result = 1;
    for (int i = 0; i < exp; i++) {
        result *= base;
    }
    return result;
}

int is_armstrong(int num) {
    int original = num, sum = 0, digits = 0, remainder;
    
    int temp = num;
    while (temp > 0) {
        temp /= 10;
        digits++;
    }
    
    temp = num;
    while (temp > 0) {
        remainder = temp % 10;
        sum += power(remainder, digits);
        temp /= 10;
    }
    
    return (sum == original);
}

int is_perfect(int num) {
    int sum = 0;
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    return (sum == num);
}

int main() {
    int num;
    
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    if (is_armstrong(num)) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }
    
    if (is_perfect(num)) {
        printf("%d is a Perfect number.\n", num);
    } else {
        printf("%d is not a Perfect number.\n", num);
    }
    
    return 0;
}

