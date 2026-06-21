#include<stdio.h>

int sum(int n)
{
    

    int first, last, sum;
    int temp = n;

    last = n % 10;

    while(temp >= 10)
    {
        temp = temp / 10;
    }

    first = temp;

    sum = first + last;


    return sum;

}
int main()
{
    int result;
    int n;

    printf("Enter any numbers : ");
    scanf("%d",&n);

    result = sum(n);
    printf("%d",result);
    
    return 0;

}