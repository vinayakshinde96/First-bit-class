#include<stdio.h>

void leap_year()
{
    int num;
    printf("Enter any year : ");
    scanf("%d",&num);

    if(num %4 ==0){
        printf("Year is leap");
    }
    else{
        printf("Year is not leap ");
    }
}

int main()
{
    leap_year();
    return 0;
}