#include<stdio.h>

void sumnum(int start,int end, int sum)
{

    for(int i = start; i <= end; i++)
    {
        sum = sum + i;
    }

    printf("Sum = %d", sum);

}

int main()
{
    int start, end, sum = 0;

    printf("Enter start and end: ");
    scanf("%d%d", &start, &end);

    sumnum(start,end,sum);
    return 0;
}