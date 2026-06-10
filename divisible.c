#include<stdio.h>
int main()
{
    int num;

    printf("Enter any number :");
    scanf("%d",&num);

    if(num%3==0 && num%5==0){
        printf("Divisible by both");
    }
    else if(num%3==0 && num%5!=0){
        printf("Divisible by 3 but not by 5");
    }
    else if (num%3!=0 && num%5==0){
        printf("Not Divisible by 5 but by 3");
    }
    else{
        printf("Divisible by None");
    }
}