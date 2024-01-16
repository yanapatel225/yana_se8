
#include <stdio.h>

int main()
{
    int days, years;

    printf("Enter days: ");
    scanf("%d", &days);

    years = (days / 365);   
    days  = days - (years * 365);
    
    printf("YEARS: %d\n", years);
    printf("DAYS: %d", days);

    return 0;
}
