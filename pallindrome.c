#include<stdio.h>
int main()
{
    int num = 121;
    int rev;

    rev = (num % 10) * 100 + ((num / 10) % 10) * 10 + (num / 100);
    if(num == rev)
    {
        printf("Number is pallindrome");
    }
    else{
        printf("Not pallindrome");
    }
    
}