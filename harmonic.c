#include <stdio.h>

int main() {
    int n;
    double sum = 0.0;
    printf("Enter the number of terms in the harmonic series: ");
    scanf("%d", &n);
    printf("Harmonic series up to %d terms:\n", n);
    for (int i = 1; i <= n; i++) {
        printf("1/%d", i);
        if (i < n) {
            printf(" + ");
        }
        sum =sum+ 1.0 / i;
    }
    printf("\nSum of the harmonic series: %.3f\n", sum);
    return 0;
}
