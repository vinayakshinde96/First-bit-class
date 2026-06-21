#include<stdio.h>

void strongnum(int n)
{
    
    int sum = 0;
    int temp = n;

    while(temp > 0)
    {
        int digit = temp % 10;
        int fact = 1;

        for(int i = 1; i <= digit; i++)
        {
            fact = fact * i;
        }

        sum = sum + fact;
        temp = temp / 10;
    }

    if(sum == n)
    {
        printf("Strong Number");
    }
    else
    {
        printf("Not Strong Number");
    }
}

int main()
{
    int n;
    printf("Enter any number : ");
    scanf("%d",&n);

    strongnum(n);
    return 0;
}