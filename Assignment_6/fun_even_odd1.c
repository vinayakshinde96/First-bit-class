#include<stdio.h>

void even_odd(int num)
{

if(num %2 ==0){
    printf("Number is even ");
}
else{
    printf("Odd number");
}
}

int main()
{
    int num;
    printf("Enter any number :");
    scanf("%d",&num);

    even_odd(num);
    return 0;
}