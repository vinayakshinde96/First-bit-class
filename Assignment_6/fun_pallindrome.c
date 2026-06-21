#include<stdio.h>

void pallindrome()
{
    int num , rev;
    printf("Enter any number :");
    scanf("%d",&num);

    rev = num % 10 +
    ((num / 10) % 10) *
    10 + (num / 10);
    
    if(num == rev){
        printf("Number is pallindrome");
    }
    else{
        printf("Number is not pallindrome");
    }
}

int main()
{
    pallindrome();
    return 0;
}