#include<stdio.h>
void sum_crr()
{
    int arr[5]= {1,2, 3, 4,5};
    int brr[5]={10,20,30, 40, 50};
    int crr[5];

    printf("Entered arr ele is : ");
    for(int i = 0; i<5; i++){
        printf("%d ",arr[i]);
    }

    printf("\nEntered brr ele is : ");
    for(int j = 0;j<5; j++){
        printf("%d ",brr[j]);
    }

    int sum = 0;
    sum = crr[0];
    printf("\ncrr : ");
    for(int k = 0; k<5; k++){
        sum = arr[k] + brr[k]; 
        printf("%d ",sum);
    }
}

int main()
{
    sum_crr();
    return 0;
}