#include<stdio.h>
int main()
{
    int marks;
    printf("Enter marks :");
    scanf("%d",&marks);

    if(marks>75){
        printf("Distinction");
    }
    else if(marks>65){
        printf("First class");
    }
    else if(marks>55){
        printf("Second Class");
    }
    else if(marks>40){
        printf("pass class");
    }
    else if(marks<40){
        printf("Fail");
    }
    else{
        printf("Invalid marks");
    }
}
