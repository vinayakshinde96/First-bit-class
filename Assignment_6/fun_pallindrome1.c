#include<stdio.h>

void pallindrome(int num)
{
    int original,rev = 0,rem;

    original == num;

    while (num > 0)
    {
        rem = num % 10 ;
        rev = rev * 10 + rem;
        num = num /10;
    }

    if(original == num)
    {
        printf("Number is pallindrome");
    }
    else{
        printf("Number is not pallindrome");
    }
}

int main()
{
    int num;
    printf("Enter any number :");
    scanf("%d",&num);

    pallindrome(num);
    return 0;
}