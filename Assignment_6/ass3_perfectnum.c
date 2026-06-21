#include<stdio.h>

void perfectnum()
{
    int num, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    for(int i = 1; i < num; i++)
    {
        if(num % i == 0)
        {
            sum = sum + i;
        }
    }

    if(sum == num)
    {
        printf("Perfect Number");
    }
    else
    {
        printf("Not Perfect Number");
    }
}

int main()
{
    perfectnum();
    return 0;
}