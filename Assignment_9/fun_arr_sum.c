#include<stdio.h>
void sum()
{


    int arr[6];
    printf("Enter any elements : ");

    for(int i = 0; i<6; i++){
        scanf("%d",&arr[i]);
    }

    printf("Entered element is : ");
    for(int j = 0; j<6; j++){
        printf("%d ",arr[j]);
    }

    int sum = 0;
    for(int k = 0; k<6;k++){
        sum = sum + arr[k];
    }
    printf("\n%d ",sum);
}

int main()
{
    sum();
    return 0;
}