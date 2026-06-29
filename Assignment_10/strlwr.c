#include<stdio.h>
#include<string.h>
int main()
{
    char str[90];

    printf("Enter your string : ");
    scanf("%s",str);

    printf("Entered str is : %s",str);

    strlwr(str);

    printf("\n%s",str);
}