#include<stdio.h>

void vote(int age){
    if(age >= 18){
        printf("Eligible for votting ");
    }
    else{
        printf("Not eligible for votting");
    }
}

int main()
{
    int age;
    printf("Enter any age : ");
    scanf("%d",&age);

    vote(age);
    return 0;
}