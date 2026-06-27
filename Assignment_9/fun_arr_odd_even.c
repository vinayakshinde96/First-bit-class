#include<stdio.h>
void even_odd()
{
    int arr[5] = {5,6,3,4,8};

    printf("Entered nu is : ");
    for(int j = 0; j<5; j++){
        printf("%d ",arr[j]);
    }

    printf("\nEven number is : ");
    for(int k = 0; k<5; k++){
        if(arr[k] % 2 == 0){
            printf("%d ",arr[k]);
        }
    }

    printf("\nodd number is : ");
    for(int m = 0; m<5; m++){
        if(arr[m] % 2 != 0){
            printf("%d ",arr[m]);
        }
    }
}
int main()
{
    even_odd();
    return 0;
}