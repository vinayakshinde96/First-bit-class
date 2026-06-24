#include<stdio.h>
int main()
{
    int arr[10];
    printf("Enter values :");

    for(int i = 0; i<10; i++){
        scanf("%d",&arr[i]);
    }
    for(int j = 0; j < 10; j++){
        printf("%d ",arr[j]);
    }
    int MIN;
    MIN = arr[0];
    for(int n = 0; n < 10; n++){
        if(arr[n] < MIN)
        MIN = arr[n];
    }
    int MAX;
    MAX = arr[0];
    for(int m = 0; m < 10; m++){
        if(arr[m] > MAX)
        MAX = arr[m];
}
printf("\n MIN is : %d",MIN);
printf("\n MAX is : %d",MAX);
}