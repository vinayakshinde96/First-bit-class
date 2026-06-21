#include<stdio.h>

int triangle()
{
     int a,b,c;

    printf("Enter triangle side a & b & c : ");
    scanf("%d%d%d",&a,&b,&c);

    if(a==b && b == c){
        return 1;
    }
    else if(a == b || b == c || a == c)
    {
        return 2;
    }
    else{
        return 0;
    }
}

int main()
{
    int result;
    result = triangle();
    if(result == 1){
        printf("Equilateral");
    }
    else if(result == 2){
        printf("Isoscalen");
    }
    else{
        printf("Scalen");
    }
    return 0;
}