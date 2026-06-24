#include<stdio.h>
int main()
{
    int arr[10];
    printf("Enter any elements : ");

    for(int i = 0; i<10; i++){
        scanf("%d",&arr[i]);
    }
    for(int j = 0; j<10; j= j+2){
        printf("%d ",arr[j]);
    }
}