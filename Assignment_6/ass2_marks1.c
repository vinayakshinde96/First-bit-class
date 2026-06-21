#include<stdio.h>

void marks_std(int marks)
{
    
    if(marks >= 75){
        printf("Distinction");
    }
    else if(marks >= 65){
        printf("First class");
    }
    else if(marks >= 55){
        printf("Second class");
    }
    else if(marks >= 40)
    {
        printf("pass class");
    }
    else if (marks >= 0)
    {
        printf("Fail");
    }
    else{
        printf("Invalis marks");
    }
}

int main()
{
    int marks;
    printf("Enter marks : ");
    scanf("%d",&marks);

    marks_std(marks);
    return 0;
}
