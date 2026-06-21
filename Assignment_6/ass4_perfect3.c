//with parameter return type

#include<stdio.h>

int perfect(int n)
{
    
    for(int i = 1; i <= n; i++)
    {
        int sum = 0;
        for(int j = 1; j < i; j++)
        {
        if(i % j == 0)
        {
            sum = sum + j;
        }
    }
    if(sum == i){
        printf(" %d",i);
    }
        
        
    }
    return n;
    
}

int main()
{
    int n;
    printf("Enter any number :");
    scanf("%d",&n);

    int result;
    result = perfect(n);
    
    return 0;

}