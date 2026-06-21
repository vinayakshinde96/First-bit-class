#include<stdio.h>

void greatest(int a, int b, int c)
{

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
    int a,b,c;

    printf("Enter number a & b & c : ");
    scanf("%d%d%d",&a,&b,&c);

    greatest(a,b,c);
    return 0;
}