#include<stdio.h>
int main()
{
    int num = 73582;
    int r1;
    int sum = 0;

    

    r1 = num % 10;
    sum = sum + r1;
    num = num / 10;

    r1 = num % 10;
    sum = sum + r1;
    num = num / 10;

    r1 = num % 10;
    sum = sum + r1;
    num = num / 10;

    r1 = num % 10;
    sum = sum + r1;
    num = num / 10;

    r1 = num % 10;
    sum = sum + r1;
    num = num / 10;

    printf("sum = %d",sum);
}

    



    