
#include<stdio.h>

int primenum()
{
    int num;
    int count = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    for(int i = 1; i <= num; i++)
    {
        if(num % i == 0)
        {
            count++;
        }
    }

    if(count == 2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main(){
    int result;
    result = primenum();
    if(result == 1){
        printf("prime number ");
    }
    else{
        printf("Not prime number");
    }


    return 0;

}