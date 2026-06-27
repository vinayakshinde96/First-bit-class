#include<stdio.h>
void alternate()
{
    int arr[8]= {2,8,9,4,5,89,90,56};

    printf("Printed ele is : ");
    for(int i = 0; i<8; i++){
        printf("%d ",arr[i]);
    }

    printf("\nalternate ele is : ");
    for(int j = 0; j<8; j = j+2){
        printf("%d ",arr[j]);
    }
}
int main()
{
    alternate();
    return 0;
}