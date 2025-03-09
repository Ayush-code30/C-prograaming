#include <stdio.h>

long long factorial(int num) {
    long long fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}

double sum_series() {
    double sum = 0.0;
    for (int i = 1; i <= 5; i++) {
        sum += (double)factorial(i) / i;
    }
    return sum;
}

int main() {
    printf("The sum of the series 1!/1 + 2!/2 + 3!/3 + 4!/4 + 5!/5 is: %.2lf\n", sum_series());
    return 0;
}

