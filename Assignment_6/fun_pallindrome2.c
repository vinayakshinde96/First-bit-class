#include<stdio.h>

int pallindrome()
{
    int num;
    printf("Enter any number : ");
    scanf("%d",&num);
    int original,rev = 0,rem;

    original = num;

    while (num > 0)
    {
        rem = num % 10 ;
        rev = rev * 10 + rem;
        num = num /10;
    }

    if(original == rev)
    {
        return 1;
    }
    else{
        return 0;
    }
}

int main()
{
    int result;
    result = pallindrome();

    if(result == 1){
        printf("pallindrome");
    }
    else{
        printf("Not pallindrome");
    }
    return 0;
}