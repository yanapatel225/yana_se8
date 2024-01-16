#include <stdio.h>
int main()
{
    int maths,phy,chem,total2,totalall;
    total2=maths+phy;
    totalall=maths,phy,chem;
    printf("Enter your marks of maths");
    scanf("%d",&maths);
    printf("Enter your marks of phy");
    scanf("%d",&phy);
    printf("Enter your marks of chem");
    scanf("%d",&chem);
    if(maths>=65 && phy>=55 && chem>=50 && total2>=140 && totalall>=190 )
    {
        printf("You are eligible for get admission");
    }
    else
    {
        printf("You are not eligible for get addmission");
    }
}
