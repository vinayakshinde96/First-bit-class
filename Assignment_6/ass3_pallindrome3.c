#include<stdio.h>

int pallindromenum(int n)
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
        return 1;
    }
    else{
        return 0;
    }
}

int main()
{
    int result;
    int n;
    
    printf("Enter any number :  ");
    scanf("%d",&n);

    result = pallindromenum(n);

    if(result == 1){
        printf("Pallindrome number ");
    }
    else{
        printf("Not pallindrome ");
    }
    
    return 0;
    
}