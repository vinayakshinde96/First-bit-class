#include<stdio.h>
void armstrong()
{
    int n,
    temp = 1,
    original,
    sum = 0;

    printf("Enter any number : ");
    scanf("%d",&n);

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
    armstrong();
    return 0;

}