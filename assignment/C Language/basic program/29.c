#include <stdio.h>

int main() {
    int minutes = 56;
    int seconds, hours;

    // Convert minutes to seconds
    seconds = minutes * 60;

    // Convert minutes to hours
    hours = minutes / 60;

    printf("%d minutes is equal to %d seconds and %d hours.\n", minutes, seconds, hours);

    return 0;
}

