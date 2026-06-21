#include<stdio.h>

int marks_std()
{
    int marks;
    printf("Enter marks : ");
    scanf("%d",&marks);
    
    if(marks >= 75){
        return 1;
    }
    else if(marks >= 65){
        return 2;
    }
    else if(marks >= 55){
        return 3;
    }
    else if(marks >= 40)
    {
        return 4;
    }
    else if(marks >= 0)
    {
        return 5;
    }
    else{
        return 0;
    }
}

int main()
{
    int result;
    result = marks_std();

    if(result == 1){
        printf(" Distinction");
    }
    else if(result == 2){
        printf(" First class");
    }

    else if(result == 3){
        printf(" Second class");
    }

    else if(result == 4){
        printf(" Pass class");
    }
    else if(result == 5){
        printf("Fail");
    }
    else{
        printf("Invalid");
    }
    
    return 0;
}
