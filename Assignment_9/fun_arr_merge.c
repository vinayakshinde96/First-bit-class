#include<stdio.h>
void merge()
{
    int arr[3];
    int brr[3];
    int crr[6];

    printf("Enter arr ele : ");
    for(int i = 0; i<3; i++){
        scanf("%d",&arr[i]);
    }

    printf("Enter brr ele : ");
    for(int j = 0; j<3; j++){
        scanf("%d",&brr[j]);
    }

    printf("Entered arr is : ");
    for(int i=0; i<3; i++){
        printf("%d ",arr[i]);
    }
    printf("\nEntered brr is : ");
    for(int j=0; j<3; j++){
        printf("%d ",brr[j]);
    }

    for(int k = 0; k<3; k++){
        crr[k] = arr[k];
    }

    for(int m = 0; m<3; m++){
        crr[m+3] = brr[m];
    }

    printf("\nMerged array is : ");
    for(int n = 0; n < 6; n++){
        printf("%d ",crr[n]);
    }

}

int main()
{
    merge();
    return 0;
}