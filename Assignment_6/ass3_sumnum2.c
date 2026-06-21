#include<stdio.h>

int sumnum()
{
    int start, end, sum = 0;

    printf("Enter start and end: ");
    scanf("%d%d", &start, &end);

    for(int i = start; i <= end; i++)
    {
        sum = sum + i;
    }

    printf("Sum = %d", sum);
    return sum;

}

int main()
{
    int result;
    result = sumnum();
    printf("%d",result);
    
    return 0;
}