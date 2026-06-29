#include<stdio.h>
#include<string.h>
int main()
{
    char str1[89];
    char str2[89];

    printf("Enter str1 : ");
    scanf("%s",str1);

    printf("Enter str2 : ");
    scanf("%s",str2);

    printf("\nEntered str1 is : %s",str1);
    printf("\nEntered str2 is : %s",str2);


    int res = strncmp(str2,str1,3);

    printf("\nresult  is : %d",res);

}