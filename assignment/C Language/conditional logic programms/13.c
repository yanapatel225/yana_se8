#include <stdio.h>
int main()
{
    int arr[3], i, m ;

    for (i = 0; i < 3; i++)
    {
        printf("Enter  numbers [%d]=", i);
        scanf("%d", &arr[i]);
    }
    m=arr[0];
    for (i = 0; i < 3; i++)
    {
        if (arr[i] < m)
        {
            m = arr[i];
        }
    }

    printf("Minimum number is %d",m);
}




    
    

