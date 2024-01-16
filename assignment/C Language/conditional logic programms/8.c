#include<stdio.h>

int main()

{

    int height;

    printf("Enter your height in centimeters here :");

    scanf("%d",&height);

    if(height<150)

    {

        printf("The person is Dwarf.");

    }

    else if(height>=150 && height<=165)

    {

        printf("The person is  average heighted.");

    }

    else if(height>=165 && height<=195)

    {

        printf("The person is taller.");

    }

    else

    {

        printf("Abnormal height.");

    }

}
