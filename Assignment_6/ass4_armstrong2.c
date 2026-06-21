//without parameter return type 

#include<stdio.h>

int armstrong()
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
        return 1;
    }
    else{
        return 0;
    }
}

int main()
{

    int result;
    result = armstrong();
    if(result == 1){
        printf("Armstrong");
    }
    else{
        printf("Not armstrong");
    }

    return 0;

}