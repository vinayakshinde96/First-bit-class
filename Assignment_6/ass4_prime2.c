//parameter without return type

#include<stdio.h>

void prime(int n)
{

    for(int i = 2; i <= n; i++)
    {
        int count = 0;

        for(int j = 1; j <= i; j++)
        {
            if(i % j == 0)
            {
                count++;
            }
        }

        if(count == 2)
        {
            printf("%d ", i);
        }
    }


}

int main()
{
     int n;
    
    printf("Enter any number : ");
    scanf("%d", &n);

    prime(n);
    return 0;
}