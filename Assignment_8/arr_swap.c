#include<stdio.h>
int main()
{
    int arr[6];

    printf("Enter elements : ");

    for(int i = 0; i < 6; i++){
        scanf("%d",&arr[i]);
    }

    printf("arr is : ");
    for(int j = 0; j < 6; j++){
        printf("%d ",arr[j]);
    }

    printf("\nreverced array is : ");
    for(int k = 5;k >= 0; k--){
        printf("%d ",arr[k]);
    }
}