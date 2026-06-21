#include<stdio.h>

void divisible()
{
    int num;
    printf("Enter number : ");
    scanf("%d",&num);

    if(num % 3 == 0 && num % 5 == 0){
        printf(" 3 or 5 both");
    }
    else if(num % 3 == 0){
        printf("Divisible by 3 but not by 5");
    }
    else if(num % 5 == 0){
        printf("Divisible by 5 but not by 3");
    }
    else{
        printf("Divisible by None");
    }
}

int main()
{
    divisible();
    return 0;
}