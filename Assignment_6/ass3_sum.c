#include<stdio.h>

void sum()
{
    int n = 12345;
    int first, last, sum;
    int temp = n;

    last = n % 10;

    while(temp >= 10)
    {
        temp = temp / 10;
    }

    first = temp;

    sum = first + last;

    printf("Sum = %d", sum);

}
int main()
{
    sum();
    return 0;

}