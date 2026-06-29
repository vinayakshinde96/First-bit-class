#include<stdio.h>
#include<string.h>
int main()
{
    char str[] = "vinu,rahul,omesh";

    printf("Entered str is : %s",str);

    char *ch = strtok(str,",");
    ch = strtok(NULL,",");


    printf("\n%s",ch);


}