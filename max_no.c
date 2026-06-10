#include<stdio.h>
int main()
{
    
    int a = 20 , b = 23 , c = 34;
    if(a>b && a>c){
        printf("a is greater");
    }
    else if(b>a && b>c){
        printf("b is greater");
    }
    else{
        printf("c is greater");
    }

}