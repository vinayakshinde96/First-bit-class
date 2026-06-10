#include<stdio.h>
int main()
{
    int a,b;
    char op;
    printf("Enter number a :");
    scanf("%d",&a);

    printf("Enter number b :");
    scanf("%d",&b);

    printf("Enter operator :");
    scanf(" %c",&op);

    if(op == '+'){
        printf("addition is : %d",a+b);
    }
    else if(op == '-'){
        printf("sub is : %d",a-b);
    }
    else if (op == '*')
    {
        printf("Multiply is : %d",a*b);
    }
    else if(op == '/'){
        printf("devide ans is : %d",a/b);
    }
    else if(op == '%'){
        printf("Module is : %d",a%b);
    }
    else
    {
        printf("Invalid");
    }

}