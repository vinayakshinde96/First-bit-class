#include<stdio.h>
void table(int n)
{
    
    n = 5;
    for(int i = 1;i<=10;i++)
    printf("%d \n",i*n);
}
int main()
{
    int n;
    printf("Enter any number : ");
    scanf("%d",n);
    table(n);
    return 0;
}