#include<stdio.h>
int main()
{
    int n = 1;
    for(int row = 1; row <= 4; row++){
        for(int col = 1; col <= row; col++){
            printf("%d",n);
            n++;
        }
        printf("\n");
    }
}