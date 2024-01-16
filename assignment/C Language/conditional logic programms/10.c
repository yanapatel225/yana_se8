#include <stdio.h>
int main()
{
    int number;
    printf("Enter any number :");
    scanf("%d",&number);
    if(number>0)
    {
        printf("%d is positive",number);
    }
    else if (number<0)
    {
        printf("%d is nagative",number);
    }
    else
    {
        printf("%d is 0",number);
    }


}

