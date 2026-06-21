//No argument no return value

#include<stdio.h>

void even_odd()
{
    int num;
    printf("Enter any number : ");
    scanf("%d",&num);

    if(num %2 ==0){
        printf("Number is even");
    }
    else{
        printf("Number is Odd");
    }
}
int main()
{
    even_odd();
    return 0;
}