#include<stdio.h>
int num()
{
     int n;

    printf("Enter any number: ");
    scanf("%d", &n);

    return n;
}

int main()
{
    int result;
    result = num();
    printf("%d",result);

    return 0;

}