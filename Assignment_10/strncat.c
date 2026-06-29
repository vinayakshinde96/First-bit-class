#include<stdio.h>
#include<string.h>
int main()
{
    char str1[89];
    char str2[89];

    printf("Enter str1 : ");
    scanf("%s",str1);

    printf("\nEntered str1 is : %s",str1);


    strncat(str2,str1,3);

    printf("\nstr2 is : %s",str2);

}