#include<stdio.h>
int main()
{
    int n = 4;
    for(int row = 1; row <= n ; row++){
        for(int col = 1; col <= n - row; col ++){
            printf("  ");
        }
        for(int col = 1; col<= 2*row - 1; col++){
            printf("* ");
        }
        
        printf("\n");
        }
        //lower
        for(int row = n - 1; row >= 1 ; row--){
            for(int col = 1; col <= n - row; col ++){
              printf("  ");
        }
        for(int col = 1; col<= 2*row - 1; col++){
            printf("* ");
        }
        printf("\n");
    }
    
}
