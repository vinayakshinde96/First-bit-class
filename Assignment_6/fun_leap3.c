#include<stdio.h>

int leap_year(int year)
{
    
    if(year %4 ==0)
    return 1;
    else
    return 0;
}

int main()
{
    int result;
    int year;

    printf("Enter any year : ");
    scanf("%d",&year);

    result = leap_year(year);

    if(result == 1){
        printf("Leap year ");
    }
    else{
        printf("Not leap ");
    }
    return 0;
}