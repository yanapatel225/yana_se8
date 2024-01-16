 #include <stdio.h>
// int main()
// {
//     int a,b,c;
//     printf("Enter a and b value here :");
//     scanf("%d%d",&a,&b);
//     printf("Before swap!!\n");
//     printf("A=%d B=%d\n",a,b);
//     c=a;
//     a=b;
//     b=c;
//     printf("\nAfter swap!!\n");
//     printf("A=%d B=%d",a,b);
// }
#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter a and b value here :");
    scanf("%d%d", &a, &b);
    printf("Before swap!!\n");
    printf("A=%d B=%d\n", a, b);
    a=a+b;
    b=a-b;

    a=a-b;
    printf("\nAfter swap!!\n");
    printf("A=%d B=%d",a,b);

}


