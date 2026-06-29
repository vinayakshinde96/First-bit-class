#include<stdio.h>
#include<string.h>
int main()
{
    char str1[23];
    char str2[89];

    printf("Enter str1 : ");
    scanf("%s",str1);

    printf("Enter str2 : ");
    scanf("%s",str2);

    printf("\nEntered str1 is : %s",str1);
    printf("\nEntered str2 is : %s",str2);

    strcat(str1,str2);
    printf("\n%s",str1);

}