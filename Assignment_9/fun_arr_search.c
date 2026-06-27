#include<stdio.h>
void search_ele()
{
    int arr[8];
    int j;
    int i;
    printf("Enter element : ");
    
    for(i = 0; i<8; i++){
        scanf("%d",&arr[i]);
    }

    printf("Entered array is : ");
    for(j = 0; j<8; j++){
        printf("%d ",arr[j]);
    }

    int num;
    int found = 0;
    
    printf("\n Enter search element : ");
    scanf("%d",&num);
    for(int k = 0; k<8; k++)
    {
        if(num == arr[k]){
        printf("Found");
        found = 1;
        break;
        }
    }
        
        if(found == 0){
            printf("Not found");
}
}

int main()
{
    search_ele();
    return 0;
}