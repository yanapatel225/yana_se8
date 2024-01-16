#include <stdio.h>
int main()
{
    int arr[3], i, m = 0;

    for (i = 0; i < 3; i++)
    {
        printf("Enter  numbers [%d]=", i);
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < 3; i++)
    {
        if (arr[i] > m)
        {
            m = arr[i];
        }
    }

    printf("Maximum number is %d",m);
}
