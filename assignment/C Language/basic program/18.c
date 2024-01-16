#include <stdio.h>

int main() {
    float monthlySalary, annualSalary;

    printf("Enter the monthly salary: $");
    scanf("%f", &monthlySalary);

    annualSalary = monthlySalary * 12;

    printf("Annual Salary: $%.2f\n", annualSalary);

    return 0;
}

