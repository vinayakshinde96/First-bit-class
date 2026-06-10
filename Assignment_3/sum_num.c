#include<stdio.h>
int main()
{
    int num = 123;
    int rem;
    int sum = 0;

    while(num!=0)
    {
        rem = num%10;
        sum = sum + rem;
        num =num / 10;
    }
    printf("%d",sum);
    
}
