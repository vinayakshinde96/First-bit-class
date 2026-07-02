#include<stdio.h>

struct time
{
    int hour;
    int min;
    int sec;
};

int main()
{
    struct time t1;

    printf("Enter hour : ");
    scanf("%d",&t1.hour);

    printf("Enter min : ");
    scanf("%d",&t1.min);

    printf("Enter sec : ");
    scanf("%d",&t1.sec);

    printf("Time is : ");

    printf("\n %02d:%02d:%02d",t1.hour,t1.min,t1.sec);
}