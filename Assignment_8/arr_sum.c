#include<stdio.h>
int main(){
    int arr[5];
    int i;
    int j;

    printf("Enter any number : ");

    for(i = 0; i < 5; i++){
        scanf("%d",&arr[i]);
    }
    for(j = 0; j < 5; j++){
        printf("%d ",arr[j]);
    }
    int sum = 0;

    for(int k = 0; k < 5; k++){
        sum = sum + arr[k];
    }
    printf("sum = %d",sum);
}