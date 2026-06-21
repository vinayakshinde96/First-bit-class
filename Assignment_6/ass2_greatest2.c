#include<stdio.h>

int greatest()
{

     int a,b,c;

    printf("Enter number a & b & c : ");
    scanf("%d%d%d",&a,&b,&c);

    if(a > b && a > c){
        return 1;
    }
    else if(b>c && b>a){
        return 2;
    }
    else{
        return 0;
    }
}

int main()
{
    int result;
    result = greatest();
    if(result == 1){
        printf("a is greater ");
    }
    else if(result == 2){
        printf("b is greater ");
    }
    else{
        printf("c is greater ");
    }
  
    return 0;
}