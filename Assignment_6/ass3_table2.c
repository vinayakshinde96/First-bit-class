#include<stdio.h>

int table()
{
    int n;
    
    printf("Enter any number : ");
    scanf("%d",&n);
    
    for(int i = 1;i<=10;i++)
    printf("%d \n",i*n);
    return n;
}
int main()
{
    int result;
    result = table();
    printf("%d",result);
    
    return 0;
}