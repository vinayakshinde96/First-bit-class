
#include<stdio.h>

void primenum(int num)
{
    int count = 0;

    for(int i = 1; i <= num; i++)
    {
        if(num % i == 0)
        {
            count++;
        }
    }

    if(count == 2)
    {
        printf("%d is Prime Number", num);
    }
    else
    {
        printf("%d is Not Prime Number", num);
    }
}

int main(){

    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    primenum(num);
    return 0;

}