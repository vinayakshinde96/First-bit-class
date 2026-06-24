#include<stdio.h>
int main()
{
    int arr[5];
    int i;
    printf("Enter values : ");

    for(i = 0; i < 5; i++){
        scanf("%d",&arr[i]);
    }

    int n;
    printf("Enter user number : ");
    scanf("%d",&n);

    for(int m = 0; m < 5; m++){
    if(arr[m]==n){
        printf("YES");
    }
    else{
        printf("NO");
    }
}
}