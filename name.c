#include <stdio.h>

int main() {
    char forename[50], surname[50];
    int year_of_birth;
    printf("Enter forename: ");
    scanf("%s", forename);
    
    printf("Enter surname: ");
    scanf("%s", surname);
    
    printf("Enter year of birth: ");
    scanf("%d", &year_of_birth);
    printf("%s %s %d\n", forename, surname, year_of_birth);
    
    return 0;
}
