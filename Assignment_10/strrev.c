#include<stdio.h>
#include<string.h>

int main()
{
    char str[] = "vinayak";

    printf("Entered str is : %s",str);

    char *ch = strrev(str);
    printf("\n%s",ch);
}