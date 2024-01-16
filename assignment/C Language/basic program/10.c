#include <stdio.h>
int main()
{
    int length,width,height;
    printf("Enter your lenght,width and height:");
    scanf("%d%d%d",&length,&width,&height);

    printf("Right rectangular prism=%d",2*((length*width)+(height*length)+(height*width)));
}
