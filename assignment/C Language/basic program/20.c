#include<stdio.h>
#include<math.h>
int main()
{
    int salary,li,ip,m,n;
    printf("Enter your salary");
    scanf("%d",&salary);
    printf("Enter your loan instalment rat:");
    scanf("%d",&li);
    printf("Enter your insuremce premium rat :");
    scanf("%d",&ip);
    m=(salary*li/100)+(salary*ip/100);
    n=salary-m;
    printf ("You remining salary =%d",n);
    
}

