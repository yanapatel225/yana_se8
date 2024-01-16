#include <stdio.h>

int main() {
    int expenses[5];
    int i;
    float sum = 0;
    float average;

    printf("Enter 5 expenses:\n");

    for (i = 0; i < 5; i++) {
        printf("Expense %d: ", i + 1);
        scanf("%d", &expenses[i]);
        
        sum += expenses[i];
    }
    
    average = sum / 5;

    printf("Average Expense: %.2f\n", average);

    return 0;
}

