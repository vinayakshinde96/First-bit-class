#include<stdio.h>
#include<string.h>
int main()
{
    char str1[67];
    char str2[79];

    printf("Enter str1 : ");
    scanf("%s",str1);

    printf("Entered str1 is : %s",str1);
    str2[3]='\0';

    strncpy(str2,str1,3);
    printf("\nstr2 is : %s",str2);
}