#include<stdio.h>

void pallindromenum()
{
    int n = 121;
    int rev = 0;
    int temp = n;

    while (temp > 0)
    {
        int digit = temp % 10;
        rev = rev * 10 + digit;
        temp = temp / 10;
    }
    if(rev == n){
        printf("Pallindrome number ");
    }
    else{
        printf("Not pallindrome number ");
    }
}

int main()
{
    pallindromenum();
    return 0;
    
}