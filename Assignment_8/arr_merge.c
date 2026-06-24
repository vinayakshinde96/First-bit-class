#include<stdio.h>
int main(){
    int arr[5],brr[5],crr[10];

    printf("Enter arr element : ");
    for(int i = 0; i < 5; i++){
        scanf("%d",&arr[i]);
    }

    printf("Enter brr element : ");
    for(int j = 0; j < 5; j++){
        scanf("%d",&brr[j]);
    }

    printf("arr element is : ");
    for(int k = 0; k < 5; k++){
        printf("%d ",arr[k]);
    }

    printf("\nbrr element is : ");
    for(int l = 0; l < 5; l++){
        printf("%d ",brr[l]);
    }


    for(int m = 0; m < 5; m++){
        crr[m] = arr[m];
    }
    for(int n = 0; n < 5; n++){
        crr[n  + 5] = brr[n];
    }

    printf("\n merged array : ");
    for(int p = 0; p<10; p++){
        printf("%d ",crr[p]);


    }

}