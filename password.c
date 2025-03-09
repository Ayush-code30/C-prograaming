#include <stdio.h>

int main() {
    int username, password;
    
   
    int correct_username = 1234; // Example numerical username
    int correct_password = 5678; // Example numerical password
    
   
    printf("Enter username (numeric): ");
    scanf("%d", &username);
    
   
    if (username == correct_username) {
        printf("Enter password (numeric): ");
        scanf("%d", &password);
        
       
        if (password == correct_password) {
            printf("Authentication successful. Welcome, User %d!\n", username);
        } else {
            printf("Incorrect password. Access denied.\n");
        }
    } else {
        printf("Incorrect username. Access denied.\n");
    }
    
    return 0;
}

