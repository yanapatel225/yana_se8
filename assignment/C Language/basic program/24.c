#include <stdio.h>

#include <string.h>

int main()

{   

    int e[5],i,total=0;

    for(i=0;i<5;i++)

    {

        printf("Enter %d employee salry",i); 

        scanf("%d",&e[i]);

    }

for(i=0;i<5;i++)

{

    total+=e[i];

}

printf("\nThe 5 people total salary %d\n",total);

total=total/5;

printf("\nThe 5 people average salary is %d",total);
}
