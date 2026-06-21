#include<stdio.h>

int vote()
{
    int age;
    printf("Enter any age : ");
    scanf("%d",&age);
    if(age >= 18){
        return 1;
    }
    else{
        return 0;
    }
}

int main()
{
    int result;
    result = vote();
    if(result == 1)
    {
        printf("Eligible ");
    }
    else{
        printf("Not eligible");
    }
    
    return 0;
}