#include<stdio.h>
#include<string.h>
int main()
{
    char str[] = "vinayak";

    printf("Entered str is : %s",str);

    strupr(str);

    printf("\n%s",str);
}