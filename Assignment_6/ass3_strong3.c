#include<stdio.h>

int strongnum(int n)
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
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int result;
    int n;
    printf("Enter any number : ");
    scanf("%d",&n);

    result = strongnum(n);

    if(result == 1){
        printf("Strong num");
    }
    else{
        printf("Not strong");
    }
    
    return 0;
}