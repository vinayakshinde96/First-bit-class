#include<stdio.h>
int main()
{
    int n;
    printf("Enter any number : ");
    scanf("%d",&n);

    for(int i = 1; i <= n; i++)
    {
       int num = i;
       int sum = 0;
       while (num > 0)
       {
        int digit = num % 10;
        sum = sum +(digit*digit*digit);
        num = num / 10;
        
       }
       if(sum == i)
       {
        printf(" %d",i);
       }
       
       
    }
    
}