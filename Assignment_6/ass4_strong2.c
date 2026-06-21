//without parameter with return type

#include<stdio.h>

int strong()
{
    
    int n;
    printf("Enter any number: ");
    scanf("%d", &n);

    for(int num = 1; num <= n; num++)
    {
        int temp = num;
        int sum = 0;

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

        if(sum == num)
        {
            printf("%d ", num);
        }
    }
    return n;


}

int main()
{

    int result;
    result = strong();
    printf("%d",result);

    
    
    return 0;
    
}