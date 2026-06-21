#include<stdio.h>

void prime()
{
    int n;
    
    printf("Enter any number : ");
    scanf("%d", &n);

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
    prime();
    return 0;
}