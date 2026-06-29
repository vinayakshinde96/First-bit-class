#include<stdio.h>
#include<string.h>
int main()
{
    char str1[10] = "Vinayak";

    printf("\nEntered str1 is : %s",str1);


    char *ptr = strchr(str1,'n');
    printf("\n%s",ptr);
}