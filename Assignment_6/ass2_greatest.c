#include<stdio.h>

void greatest()
{
    int a,b,c;

    printf("Enter number a & b & c : ");
    scanf("%d%d%d",&a,&b,&c);

    if(a > b && a > c){
        printf("a is greater");
    }
    else if(b>c && b>a){
        printf("b is greater");
    }
    else{
        printf("c is greater");
    }
}

int main()
{
    greatest();
    return 0;
}