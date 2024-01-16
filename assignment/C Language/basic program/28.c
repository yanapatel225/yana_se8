#include <stdio.h>

int main() {
    int years = 3;
    int months, days;

    months = years * 12; 
    days = years * 365; 

    printf("%d years is equal to approximately %d months and %d days.\n", years, months, days);

    return 0;
}

