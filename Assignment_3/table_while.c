#include<stdio.h>
int main()
{
    int num;
    printf("Enter any number:");
    scanf("%d",&num);
    int i = 1;
    while(i<=10){
        printf(" \n %d", num*i);
        i++;
    }
}