#include<stdio.h>
int main()
{
    for(int row = 1; row <= 5; row++){
        for(int col = 1; col <= 5; col++){
            if(row ==1 || row == 5 || col == 1 || col == 5 || row ==2 && col == 2 || row == 3 && col == 3 || row == 4 && col == 4){
            printf("* ");
        }
        else{
            printf("  ");
        }
        
}
printf("\n");
}
}