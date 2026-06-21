#include<stdio.h>

void triangle(int a, int b, int c)
{
    if(a==b && b == c){
        printf("Equilateral");
    }
    else if(a == b || b == c || a == c)
    {
        printf("Isoscalen");
    }
    else{
        printf("scalen");
    }
}

int main()
{
    int a,b,c;

    printf("Enter triangle side a & b & c : ");
    scanf("%d%d%d",&a,&b,&c);

    triangle(a,b,c);
    return 0;
}