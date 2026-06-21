#include<stdio.h>

int divisible()
{
    int num;
    printf("Enter number : ");
    scanf("%d",&num);

    if(num % 3 == 0 && num % 5 == 0){
        return 1;
    }
    else if(num % 3 == 0){
        return 2;
    }
    else if(num % 5 == 0){
        return 3;
    }
    else{
        return 0;
    }
}

int main()
{
    int result;
    result = divisible();

    if(result == 1){
        printf("Both");
    }
    else if(result == 2){
        printf("Only 3");
    }
    else if(result == 3){
        printf("Only 5");
    }
    else{
        printf("Invalid");
    }
    
    return 0;
}