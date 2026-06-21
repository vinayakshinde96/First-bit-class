#include<stdio.h>
void num(int n)
{
    int i;
    
    for(i = 1; i<=10; i++){
        printf("%d \n",i);
    }
}

int main()
{
    int n;
    printf("Enter any number :");
    scanf("%d",&n);
    
    num(n);
    return 0;

}