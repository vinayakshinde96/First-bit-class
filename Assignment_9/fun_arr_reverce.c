#include<stdio.h>
void reverce()
{
    int arr[7];

    printf("Enter elment : ");

    for(int i = 0; i<7; i++){
        scanf("%d",&arr[i]);
    }

    printf("Entered arr is : ");
    for(int j = 0; j<7; j++){
        printf("%d ",arr[j]);
    }

    printf("\nreverced arr is : ");
    for(int k = 6; k>=0; k--){
        printf("%d ",arr[k]);
    }
}

int main()
{
    reverce();
    return 0;
}