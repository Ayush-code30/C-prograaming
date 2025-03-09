#include <stdio.h>

int main() {
    double principal, rate, time, compound_interest, amount;
    char choice;
    int i;
    
    do {
       
        printf("Enter principal amount: ");
        scanf("%lf", &principal);
        printf("Enter annual interest rate (in percentage): ");
        scanf("%lf", &rate);
        printf("Enter time period (in years): ");
        scanf("%lf", &time);
        
       
        amount = principal;
        for (i = 0; i < (int)time; i++) {
            amount += (amount * rate / 100);
        }
        compound_interest = amount - principal;
        
        printf("Compound Interest: %.2lf\n", compound_interest);
        
      
        printf("Do you want to calculate again? (y/n): ");
        scanf(" %c", &choice);
        
    } while (choice == 'y' || choice == 'Y');
    
    return 0;
}

