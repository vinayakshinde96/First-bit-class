#include<stdio.h>
int main()
{
    int arr[5];
    int j;
    printf("Enter values : ");

    for(int i = 0; i<5; i++){
        scanf("%d",&arr[i]);
    }
    for(j = 0; j<5; j++){
        printf("%d ",arr[j]);
    }
    
    for(int k = 0; k < 5; k++){
        if(arr[k] % 2 ==0){
            printf("\n %d Even NO",arr[k]);
        }
        else{
            printf("\n %d ODD No",arr[k]);
        }
    }
}
