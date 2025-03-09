#include <stdio.h>

int main() {
    int customer_id, units;
    char name[50];
    float charge, total_bill;
    
    
    printf("Enter Customer ID: ");
    scanf("%d", &customer_id);
    
    printf("Enter Customer Name: ");
    scanf("%s", name);
    
    printf("Enter units consumed: ");
    scanf("%d", &units);
  
    if (units <= 199) {
        charge = units * 1.20;
    } else if (units >= 200 && units < 400) {
        charge = units * 1.50;
    } else if (units >= 400 && units < 600) {
        charge = units * 1.80;
    } else {
        charge = units * 2.00;
    }
    
    total_bill = charge;
    
  
    if (total_bill > 400) {
        total_bill += total_bill * 0.15;
    }
    
    if (total_bill < 100) {
        total_bill = 100;
    }
    
  
    printf("\nElectricity Bill\n");
    printf("Customer ID: %d\n", customer_id);
    printf("Customer Name: %s\n", name);
    printf("Units Consumed: %d\n", units);
    printf("Total Amount to be Paid: Rs. %.2f\n", total_bill);
    
    return 0;
}

