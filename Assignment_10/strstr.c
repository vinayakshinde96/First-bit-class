#include<stdio.h>
#include<string.h>
int main()
{
    char str1[] = "Hello word";
    char str2[] = "word";

    printf("Entered str1 is : %s",str1);
    printf("\nEntered str2 is : %s",str2);

    char *p = strstr(str1,str2);
    printf("\n%s",p);
}