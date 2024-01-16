#include <stdio.h>
int main()
{
    char m;
    printf("Enter your character:");
    scanf("%c",&m);
    if(m== 'a'||m=='e'||m=='i'||m=='o'||m=='u')
    {
        printf("Vowel");
    }
    else
    {
        printf("Not Vowel");
    }
}
