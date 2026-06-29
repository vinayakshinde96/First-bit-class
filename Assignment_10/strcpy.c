#include<stdio.h>
#include<string.h>
int main()
{
    char str1[32];
    char str2[56];

    printf("Enter str1 : ");
    scanf("%s",str1);

    printf("Enter str2 : ");
    scanf("%s",str2);

    printf("\nEntered str1 is : %s",str1);
    printf("\nEntered str2 is : %s",str2);

    strcpy(str2,str1);
    printf("\ncopy str is : %s",str2);
}