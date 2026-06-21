#include<stdio.h>

void pallindromenum(int n)
{
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
    int n;
    printf("Enter any number :  ");
    scanf("%d",&n);
    
    pallindromenum(n);
    return 0;
    
}