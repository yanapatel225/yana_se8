#include <stdio.h>

int main() {
    float salary, insurancePremium;

    // Input person's salary
    printf("Enter the person's salary: $");
    scanf("%f", &salary);

    // Calculate insurance premium (assuming 10%)
    insurancePremium = 0.10 * salary; // Assuming 10% premium

    // Display the calculated insurance premium
    printf("Insurance Premium: $%.2f\n", insurancePremium);

    return 0;
}



