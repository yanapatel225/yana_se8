#include <stdio.h>

int main() {
    float principal, amount, compoundInterest;

    printf("Enter principal amount: ");
    scanf("%f", &principal);

    printf("Enter final amount after interest: ");
    scanf("%f", &amount);

    compoundInterest = amount - principal;

    printf("Compound Interest: %.2f\n", compoundInterest);

    return 0;
}

