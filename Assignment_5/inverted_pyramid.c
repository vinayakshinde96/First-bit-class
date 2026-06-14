#include<stdio.h>
int main()
{
    for(int row = 1; row <= 5; row ++)
    {
        for(int col = 1; col <= row - 1; col++){
            printf("  ");
        }
        for(int col = 1; col <= 2*(5-row)+1; col++)
        {
            printf("* ");
        }
        printf("\n");
    }
    
}