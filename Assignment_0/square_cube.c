#include<stdio.h>
int main()
{
    int num , square , cube;
    printf("Enter any value to find their square : ");
    scanf("%d",&num);

    square = num * num ;
    printf("square = %d",square);

    printf("\nEnter any value to find a cube : ");
    scanf("%d",&num);

    cube = num * num * num ;
    printf("cube = %d",cube);
}