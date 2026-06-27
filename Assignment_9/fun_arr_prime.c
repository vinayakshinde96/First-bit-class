#include<stdio.h>
void prime()
{
    int arr[6]={4,6,8,2,5};
    int count = 0;
    int i;

    for( i = 0; i<6; i++){
        int count = 0;
    }

    for(int j = 1; j<=arr[i]; j++){
        if(arr[i] % j == 0){
            count++;
        }
    }

        if(count == 2){
            printf("\nprime no : %d",arr[i]);
        }
}
int main()
{
    prime();
    return 0;
}