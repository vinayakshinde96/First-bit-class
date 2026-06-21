#include<stdio.h>

void perfectnum(int num)
{
    int sum = 0;

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
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    perfectnum(num);
    return 0;
}