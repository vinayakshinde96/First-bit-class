#include<stdio.h>

int perfectnum()
{
    int num;
    int sum = 0;

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
    result = perfectnum();
    if(result == 1){
        printf("Perfect no");
    }
    else{
        printf("Not perfect");
    }
    return 0;
}