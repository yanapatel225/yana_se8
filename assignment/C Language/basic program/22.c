#include <stdio.h>

int main() {
    float principal, rate, time, amount;

    printf("Enter principal amount: ");
    scanf("%f", &principal);

    printf("Enter annual interest rate: ");
    scanf("%f", &rate);

    printf("Enter time in years: ");
    scanf("%f", &time);

    amount = principal * pow(1 + rate / 100, time);
    
    printf("Amount after %0.2f years: %.2f\n", time, amount);

    return 0;
}

