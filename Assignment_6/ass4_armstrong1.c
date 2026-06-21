#include<stdio.h>

void armstrong(int n)
{
    int temp = 1,
    original,
    sum = 0;

    original = n;
    temp = n;

    while(temp > 0){
        int digit = temp % 10;
        sum = sum +(digit*digit*digit);
        temp = temp / 10;
    }
    if(sum == original){
        printf("Armstrong number ");
    }
    else{
        printf("Not armstrong number ");
    }
}

int main()
{
    int n;
    printf("Enter any number : ");
    scanf("%d",&n);
    armstrong(n);
    return 0;

}