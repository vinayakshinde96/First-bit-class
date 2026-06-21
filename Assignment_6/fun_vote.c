#include<stdio.h>

void vote()
{
    int num;
    printf("Enter votter age : ");
    scanf("%d",&num);

    if(num >= 18){
        printf("Eligible for votting");
    }
    else{
        printf("Not eligible for votting");
    }
}

int main()
{
    vote();
    return 0;
}