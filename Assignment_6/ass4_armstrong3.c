//wit parameter with return type 

#include<stdio.h>

int armstrong(int n)
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
        return 1;
    }
    else{
        return 0;
    }
}

int main()
{
    int n;

    printf("Enter any number : ");
    scanf("%d",&n);

    int result;
    result = armstrong(n);
    if(result == 1){
        printf("Armstrong");
    }
    else{
        printf("Not armstrong");
    }

    return 0;

}