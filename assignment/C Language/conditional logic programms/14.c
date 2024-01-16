#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter a,b and c value here :");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
    {
        printf("A is larger!!");
    }
    else if (b>c && b>a)
    {
        printf("B is larger!!");
    }
    else
    {
        printf("C is larger");
    }
}
