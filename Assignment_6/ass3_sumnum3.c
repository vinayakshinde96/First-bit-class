#include<stdio.h>

int sumnum(int start,int end)
{
    int sum = 0;
    for(int i = start; i <= end; i++)
    {
        sum = sum + i;
    }
    return sum;

}

int main()
{
    int start, end,result;

    printf("Enter start and end: ");
    scanf("%d%d", &start, &end);

    result = sumnum(start,end);
    printf("%d",result);
    
    return 0;
}