#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    float avg;
    printf("Enter your value :");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);

    avg = (a + b + c + d + e)/5.0;
    printf("Average = %.2f",avg);

}