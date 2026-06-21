#include<stdio.h>

int calculator(int num1,int num2, char op)
{

    if(op == '+')
        return num1 + num2;
    else if(op == '-')
        return num1 - num2;
    else if(op == '*')
        return num1 * num2;
    else if(op == '/')
        return num1 / num2;
    else if(op == '%')
        return num1 % num2;
    else
        return -999;
}

int main()
{
    int result;
    int num1, num2;
    char op;

    printf("Enter number num1 & num2 : ");
    scanf("%d%d",&num1,&num2);

    printf("Enter operator : ");
    scanf(" %c",&op);

    result = calculator(num1,num2,op);

    if(result == -999)
    {
        printf("Invalid Operator");
    }
    else
    {
        printf("Result = %d", result);
    }

    return 0;
}