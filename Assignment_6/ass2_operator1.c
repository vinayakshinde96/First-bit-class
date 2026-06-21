#include<stdio.h>

void operator(int num1, int num2, char op)
{

    if(op == '+'){
        printf("addition is : %d", num1 + num2);
    }
    else if(op == '-'){
        printf("subtraction is : %d", num1 - num2);
    }
    else if(op == '*'){
        printf("multiplication is : %d", num1 * num2);
    }
    else if(op == '/'){
        printf("Division is : %d", num1 / num2);
    }
    else if(op == '%'){
        printf("module is : %d", num1 % num2);
    }
    else{
        printf("Invalid operator");
    }

}

int main()
{
    int num1,num2;
    char op;
    
    printf("Enter number num1 & num2 : ");
    scanf("%d%d",&num1,&num2);

    printf("Enter operator : ");
    scanf(" %c",&op);

    operator(num1,num2,op);
    return 0;
}