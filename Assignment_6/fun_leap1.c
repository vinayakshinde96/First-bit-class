#include<stdio.h>

void leap_year(int num)
{
if(num % 4 == 0){
    printf("Leap year ");
}
else
{
    printf("Not leap");
}
}

int main()
{
    int num;
    printf("Enter any year : ");
    scanf("%d",&num);

    leap_year(num);
    return 0;
}
